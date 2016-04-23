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
#include<math.h>
long bigmod(int,int,int);
long square(int);
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{
	long t,x,y,z,i,j,k,b,p,m;
	while(scanf("%d%d%d",&b,&p,&m)!=EOF)
{
	z= bigmod(b,p,m);
	cout<<z<<endl;
}
return 0;
}

long bigmod(int b,int p,int m)
{
		if(p==0)
		return 1%m;
		else if(p%2==0)
		return square(bigmod(b,p/2,m))%m;
				else
				return (b%m) * bigmod(b,p-1,m)%m;
}
long square(int x)
{
	return x*x;
}
