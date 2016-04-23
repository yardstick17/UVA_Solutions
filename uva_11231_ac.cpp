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
int t,x,y,z,i,j,k,sum,count;
while(1)
{
	scanf("%d%d%d",&x,&y,&z);
	if(x==0 && y==0 && z==0)
	break;
	count = (x-7)*(y-7);
	i = count / 2;
	if(count%2==1 && z==1)
	i = i + 1;
	cout<<i<<endl;
}





return 0;
}

