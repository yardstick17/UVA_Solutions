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
	long t,x,y,n,z,i,j,k,count=0;
	while(1)
	{	count = 0;
		scanf("%ld",&n);
		if(n==0)
		break;
		x=1;
		if(n==1)
		{
			cout<<"0"<<endl;
			continue;
			
		}
		while(n>=x)
		{
			count++;
			x=x<<1;
			//cout<<" x is :"<<x<<endl;
		}
		cout<<count-1<<endl;
	}





return 0;
}

