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
int dp[1000000] , sum ;
int main()
{
  int i , j , k , count ; 
  int a[] = {1 , 5 , 10 , 25, 50 } ;
     memset(dp , 0 , sizeof(dp)) ;
     dp[0] = 1 ;
	 for(i = 0 ; i < 5 ;i++)
  	  {
  	  	  for(sum = 0 ; sum <= 200000 ;sum++)
  	  	   {
  	  	   	    if(sum >= a[i])
  	  	   	   	 dp[sum] += dp[sum - a[i]] ;
  	  	   	
  	  	   }
  	  }
  while(scanf("%d" , &k)!=EOF)
  {
  	 cout<<dp[k]<<endl;
  }





return 0;
}

