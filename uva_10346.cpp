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
{  int t,x,y,count,sum,a,b,c;
  while(scanf("%d%d",&x,&y)!=EOF)
	{   a = x;
	    sum = 0 ;
		while(a/y)
		{		 b = a % y ;
			     c = a/y;
			     a = c + b ;
			     sum = sum + c ;
		}
		cout<<sum+x<<endl;
	
			
		}	






return 0;
}

