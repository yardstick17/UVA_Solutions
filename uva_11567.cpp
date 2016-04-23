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

int main()
{
  int i , t , s , n ; 
  while(scanf("%d" , &n)!=EOF)
  {
  	  int k = n ;
  	  int count = 0 ;
  	  while(k!=0)
  	   {
  	   	   if(k%2 == 0)
  	   	   {
  	   	   	  k = k/2 ;
  	   	   	  count++;
  	   	   }
  	   	   else
  	   	   {
  	   	   	  if(((k-1)/2)%2==0 || (k+1)/2 == k - 1)
			  k = k - 1 ;
			  else
			  k = k + 1 ; 
  	   	   	  count++;
  	   	   }
  	   	  // cout<<" k is : "<<k<<endl;
  	   }
  	   cout<<count<<endl;
  }





return 0;
}

