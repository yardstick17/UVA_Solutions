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
long long gcd(int a,int b)
{
	long long r= 1;
	while(a)
	{  	r = a;
		a = b % a;
		b= r;
		
	}
	return b;
}

int main()
{
	long long t,g,a,b;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld / %lld",&a,&b);
		g= gcd(a,b);
		a=a/g;
		b=b/g;
		cout<<a<<" / "<<b<<endl;
		
//	cout<<g<<endl;
	}





return 0;
}

