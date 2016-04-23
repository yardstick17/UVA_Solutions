			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<math.h>
#include<set>
#include<queue>
#include<stdlib.h>
#include<iomanip>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{



long long t,u,v,d;
scanf("%lld",&t);
double t1;
int i=1;
while(t--)
{
		cin>>d>>v>>u;
		
		if (v>=u || u==0 || v==0)
		cout<<"Case "<<i<<": can't determine"<<endl;
        else
		{
		t1 = (double)d/(u * sin(acos((double)v/u))) - (double)d/u;;
		cout<<"Case "<<i<<": "<<fixed<<setprecision(3)<<t1<<endl;
		}
		//else
		//cout<<"Case "<<i<<": can't determine"<<endl;
		i++;
}

return 0;
}

