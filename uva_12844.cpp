			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<string.h>
#include<queue>
#include<stdlib.h>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
template<class T> inline void read(T&x){bool fu=0;char c;for(c=getchar();c<=32;c=getchar());if(c=='-')fu=1,c=getchar();for(x=0;c>32;c=getchar())x=x*10+c-'0';if(fu)x=-x;};
template<class T> inline void read(T&x,T&y){read(x);read(y);}
template<class T> inline void read(T&x,T&y,T&z){read(x);read(y);read(z);}
template<class T> inline void read(T&x,T&y,T&z,T&q){read(x);read(y);read(z);read(q);}
vector<int>arr,a,sum;
int sm,sum_check;
bool Solution(int a_zero)
{    int a_next;
	 vector<int>sum2;
	 sum2 = sum;
	 F(i,1,5)
	  {    
	    F(j,0,i-1)
	     {
	     	 int  temp = a[i-1] + a[j];
	     	
			  vector<int>::iterator it = find(sum2.begin(),sum2.end(),temp);
	     	
			  if( it != sum2.end())
	     	  sum2.erase(it);
	     	  else
	     	  {
	     	  a.clear();
	     	  return false;
		      }
	     }
	     a_next = sum2[0] - a_zero;
	     a.push_back(sum2[0] - a_zero);
	 }
	        vector<int>::iterator it;
	        sm = 0 ;
	  		for(it = a.begin();it!= a.end();it++)
	  		sm = sm + *it;
	  		if(sm==sum_check)
	  		return true;
	     	return false;
}

int main()
{ 
    int t,x,cs=1;
    read(t);//)S(t);
    while(t--)
    {    sum.clear();
         arr.clear();
         a.clear();
    	 F(i,0,10)
    	 {
    	 	  read(x);//S(x);
			  arr.push_back(x);
    	 }
    	
		 sort(arr.begin(),arr.end());
    	 sum = arr;
    	 sum_check = 0 ;
     F(i,0,10)
    	 {  sum_check += sum[i]; //cout<<sum[i]<<" ";
    	 
             }
             sum_check = sum_check / 4 ;
             
    	 F(i,2,10)//arr[0]/2+1)
    	  {     sm = 0 ;
		        a.clear();
		        x = (arr[0] + arr[1] - arr[i]);
		        if(x%2 == 0 )
		        {
		        x = x/2;
    	 	    a.push_back(x); 
	    	 	bool success = Solution(x);
	    	 	if(!success)
	    	 	continue;
	    	 	else
		    	 	{
		    	 		break; 
		    	 	}
		    	 }
		    }
		    
		    
		    
		    	 	 
    	 
    	 printf("Case %d: ",cs);//cout<<"Case "<<cs<<": ";
    	 F(i,0,4)
    	 printf("%d ",a[i]);//cout<<a[i]<<" ";
    	 printf("%d\n",a[4]);//cout<<a[4]<<endl;
    	 cs++;
    }

return 0;
}

