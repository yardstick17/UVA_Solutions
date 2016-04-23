			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<algorithm>
#include<map>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{ int n,t,r,d,cost,x,i;
int a[10000],b[10000];
while(1)	
{	cost=0;
	cin>>n>>d>>r;
	if(n==0 && d==0 && r==0)
	break;
	REP(i,0,n)
	{
		cin>>x;
		a[i]=x;
	}
	REP(i,0,n)
	{
		cin>>x;
		b[i]=x;
	}
	sort(a,a+n);
	sort(b,b+n,greater<int>());
	REP(i,0,n)
	{
		x= a[i] + b[i];
		if(d<x)
		{
		cost= cost +  (x-d)*r;
		}
	} cout<<cost<<endl;
	}
	
	






return 0;
}

