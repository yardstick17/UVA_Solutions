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
int dp[1004] , a[10004];
int main()
{
	 int i , t , n , tmp  , j , max ,sum ;
	 bool b[10005] ; 
	 S(t) ;
	 while(t--)
	 {
	 	 cin>>n;
	 	 sum = 0 ;
	 	 for(i = 2 ;  ;i++ )
	 	 {
	 	 
		  sum = sum + i ;
		  if(sum > n )
		  {
		  	  sum = sum - i;
		  	    break;
		  }
		
		   a[i-2] = i ;
		  
	 	 }
		 int k = i - 2 ;
	 	 int r = n -sum ;
	 	 i = k -1 ;
	 //cout<<i;
	 	 for( ; r >0 ;)
	 	 {
			 a[i] += 1;
			 r--;    
			 i--;
			 if(i<0)
			 i = k-1;
	 	 }
	 	 for(i = 0 ; i < k  ; i++)
	 	 if(i==k-1)
	 	 cout<<a[i]<<endl; 
	 	 else
	 	 cout<<a[i]<<" ";
	 	 
	 	 if(t)
	 	 cout<<"\n";

	

	 }






return 0;
}

