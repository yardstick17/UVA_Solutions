			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<string.h>
#include<math.h>
#include<queue>
#include<stdlib.h>
using namespace std;
#define S(x) scanf("%lld",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{
 long long int t,n,ans,x;
 S(t);
 F(i,0,t)
  {
  	  S(n);
  	  x = sqrt(n);
  	  long long sum = 0 ;
  	  if(n==1)
  	  {
  	  	cout<<"1"<<endl;
  	  	continue;
  	  }
  	  for(int i = 1 ; i <= x; i++ )//F(i,1,x)
  	  {
  	  	  if(n%i==0)
  	  	   {
  	  	   	 if(i!=n/i)
			 sum = sum + i + n/i;
			 else
			 sum = sum + i ;
  	  	   }
  	  }
  	  cout<<sum<<endl;
  	  
  	  
  }





return 0;
}

