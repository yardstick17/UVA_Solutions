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
#include<math.h>
#include<stdlib.h>
#include<string>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
bool b[100005];
int g;
long long  cnt[100004];
void mark_multiples(long long int x,long long int n)
{
	  int time = 2 ;
       while(time*x <= n)
	   {
	   	 b[time*x] = false;
	   	 time++;
	   }	  
}
void Sieve(long long int n)
{
	
	 memset(b,true,sizeof(b));
	 for(long i = 2 ; i <= sqrt(n)+1 ; i++)
	   {
	   	    if( b[i] == true )
	   	     {
	   	     	 mark_multiples(i,n);
	   	     }
	   }
	   b[0] = false;
	   b[1] = false;
}

bool subsequence(long long int *a,long long int n)
{ 
  
  for(int i = 1 ; i<1<<n;i++)
  {
  	 int temp = i ;
  	 int j=0;
  	 char str[100];
  	 string s;
  	 s = "";
  	 
    while(temp)
    {
        if (temp&1) // if jth bit is set print a[j]
        {
            sprintf(str,"%lld",a[j]);
            s = s + str;
            
        }
        temp >>= 1;
        j++;
    }
    reverse(s.begin(),s.end());
    long long num;
	num = atol(s.c_str());
	if(b[num]==true)
	return true;
	 	
  }
  return false;
  }



void main111()
{
	long long flag,a[100];
	 memset(cnt,0,sizeof(cnt));
	 char str[100];
	 for(long long int i = 1 ; i <= 100000+5; i++)
	  {  
	  
	     long long  k = i,x,index = 0;
	     flag = 1 ;
		  
	     while(k != 0)
	       {
	       	 x = k % 10 ;
	       	 k = (k - x )/10;
	       	 if(x==2 || x == 3 || x == 5 || x== 7)
	       	    flag = 0 ;
	       	  
		        a[index] = x ;
				index++; 
			
			
	       	}
	       		
	     if(flag == 0)
		 {
		 	 cnt[i] = cnt[i-1]; ;
		 }
		 else
		 {   //long long  in = 0,arr[100] ;
		/*	 for(int ind = index -1; ind>=0 ;ind--)
			 {
			 	 arr[in] = a[ind];
			 	 in++;
			 }*/
		  	 bool f = subsequence(a,index);
		  	 if(f)
		  	 { 
		  	    cnt[i] = cnt[i-1];
		  	 	
		  	 }
		  	 else
		  	 {
		  	 	 cnt[i] = cnt[i-1] + 1 ;
		  	 	 
		  	 }
		  	 
		  	 
	     }
	    /* cout<<i<<" : "<<cnt[i]<<" \n";
	     
		 if(i%10==0)
	     cin>>g;*/
     }
}

int main()
{
	
	  Sieve(100005);
	  main111();
	 // cout<<" cnt[100000] : "<<cnt[100001]<<" "<<cnt[9998]<<endl;
	  long long n,ar,br,temp;
	  scanf("%lld",&n);//S(n);
	  while(n--)
	  {
	  	 scanf("%lld%lld",&ar,&br);
	  	 if(ar>br)
	  	 {
	  	 	 temp = ar;
	  	 	 ar = br ;
	  	 	 br = temp;
	  	 }
		   cout<<cnt[br+1] - cnt[ar-1]<<endl;
	  	 
	  }
	 


return 0;
}

