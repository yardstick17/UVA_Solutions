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
		int t,x,y,n,p,z,i,j,k;
		scanf("%d",&t);
		REP(i,0,t)
		{
				scanf("%d %d %d",&n,&k,&p);
				if((k+p)%n==0)
				{
					cout<<"Case "<<i+1<<": "<<n<<endl;
					continue;
				}
				else
				cout<<"Case "<<i+1<<": "<<(k+p)%n<<endl;
		
		}





return 0;
}

