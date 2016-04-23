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
#define S(x) scanf("%lld",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{
   long long int t;
   long long int cnt=0;
   long long a[100005],n;
   S(t);
   while(t--)
    {     cnt = 0 ;
    	  S(n);
    	  F(i,0,n)
    	   {
    	   	 S(a[i]);
    	   }
    	  
		   if(a[0]!=a[1])
		    {
		    	 cnt=1 ;
		    }
		    int i;
		   REP(i,1,n-1)
    	    {
    	    
				//cnt++;
				
				if((a[i+1]!=a[i] )|| (a[i-1]!=a[i]))
				cnt++;  
    	    }
    	    if(a[i-1]!=a[i])
    	    cnt++;
    	    
    	    cout<<cnt<<endl;
    }





return 0;
}

