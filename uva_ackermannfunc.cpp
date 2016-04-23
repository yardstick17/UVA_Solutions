			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<queue>
#include<stdlib.h>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{


long long int t,x,y,z,count=0,i,a,d,max;
while(1)
{
	 scanf("%lld%lld",&x,&y);
	 if(x>y)
	 {max =  x ;
	  x = y ;
	  y = max; 
	 }
	 if(x==0 && y ==0)
	 break;
	 max = 0 ;
	// a = x ; 
	 REP(i,x,y+1)
	 {	
	 	count = 0 ;
		 if(i==1)
	 	d=1,count=3;	
	 //max = 0 ;
	 
	 a = i;
	 	 while(a!=1)
	 	 {
	 	 	  
			if(a%2==0)
	 	 	  a = a / 2 ;
	 	 	  else
	 	 	  a = 3 * a + 1 ;
	 	 	  count++;
	 	 	  //cout<<a<<" ";
	 	 }
	 	// cout<<" count is:"<<count<<endl;
	 	 if(count>max)
	 	 {      
		        d = i;
			//	cout<<"to updted max "<<max<<" n count is "<<count<<endl;
				max = count;
		 }
	//	a++; 
	 }
	 cout<<"Between "<<x<<" and "<<y<<", "<<d<<" generates the longest sequence of "<<max<<" values."<<endl;
}



return 0;
}

