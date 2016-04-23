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
//#define S(x) scanf("%lld",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
int a[200004],arr[200005];
int main()
{
   long long n,sum,i,tot = 0 ,x;
   cin>>n>>sum;
   REP(i,0,n)
   {
   
    cin>>a[i];
    tot = tot + a[i];
	  }
	  memset(arr,0,sizeof(arr));
    REP(i,0,n)
      {  
	  
	      x = sum - (tot - a[i]) - 1 ;
	      if(x>=0)
	      arr[i] = arr[i] + x ;
	      
	      x = sum - (n  -  1 );
	      x = a[i] - x ;
	      if(x>=0)
	      arr[i] = arr[i] + x ;
	      
      }
      REP(i,0,n)
      cout<<arr[i]<<" ";
   
   
  




return 0;
}

