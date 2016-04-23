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
  unsigned long long int t,x,y,k;
  while(scanf("%lld %lld",&x,&y)!=EOF)
  { t = x + y ;
  	k = x & y ;
  	k = k<<1;
  	cout<<t-k<<endl;
  	
  }





return 0;
}

