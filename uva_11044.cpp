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
{  long int t,x,y;
		S(t);
		while(t--)
		{
			 scanf("%ld%ld",&x,&y);
			 x = x/3;
			 y = y/3;
			 cout<<x*y<<endl;
		}






return 0;
}

