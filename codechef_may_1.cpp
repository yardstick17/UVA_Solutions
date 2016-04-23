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
#include<limits.h>
using namespace std;
#define S(x) scanf("%lld",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{

     long long i,t,n,a[100005],sum;
     long long min;
     S(t);
     while(t--)
      {
      	  S(n);
      	  sum = 0 ;
      	  min = INT_MAX ;
      	  F(i,0,n)
      	  {
      	  		S(a[i]);
      	  		if(min>=a[i])
      	  		min = a[i];
      	  		
      	  		sum = sum + a[i];
      	  		
          }
          sum = sum - min;
          if(min<2)
          cout<<"-1"<<endl;
          else
          cout<<sum + 2<<endl; 
      }
     
     



return 0;
}

