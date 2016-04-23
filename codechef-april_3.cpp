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
  long long i,j,k,t,l,n,m,x,len,sum;
  char c[100000];
  S(t);
  F(i,0,t)
   {  k = 0 ;
   sum = 0 ;
      scanf("%s",c);
   	  S(n);
   	  len = strlen(c);
   	  F(j,0,len)
   	    {
   	    	 if(c[j]=='S')
   	    	 k++;
   	    	 else
   	    	 k = k + 2 ;
   	    }
		  for(j = 1 ;k*j<12*n; j++)
		  {    
		  	    //cout<<"k*j : "<<k*j<<endl;
		  	   for(m=1 ;m + k*j <=12*n;m++)
		  	   {
		  	   	  // cout<<"k*j: "<<k*j<<endl;
		  	   	   sum++;
		  	   }
		  }	  
   	    cout<<sum<<endl;
   	  
   	  
   	  
   }





return 0;
}

