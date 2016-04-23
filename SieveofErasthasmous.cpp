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
bool b[100005];
void mark_multiples(int x,int n)
{
	  int time = 2 ;
       while(time*x < n)
	   {
	   	 b[time*x] = false;
	   	 time++;
	   }	  
}
int sieve(int n)
{
	
	 memset(b,true,sizeof(b));
	 for(int i = 2 ; i <= n ; i++)
	   {
	   	    if( b[i] == true )
	   	     {
	   	     	 mark_multiples(i,n);
	   	     }
	   }
}

int main()
{
	  int n;
	  S(n);
	  sieve(n);
	  b[0] = false;
	  b[1] = false;
	  
	  
	  F(i,0,n)
	  {
	  	 if(b[i]==true)
	  	 cout<<i<<" ";
	  }



return 0;
}

