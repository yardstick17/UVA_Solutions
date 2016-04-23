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
long t,i,j,k,x,y,z,count,sum,key;
while(scanf("%d",&t)!=EOF)
{
	k=1;
	i=0;
	
	while(i<t)
	{
		i = i + k;
		k++;
//	cout<<i<<endl;
	}
 i++;
 //cout<<i<< " "<< k<<endl;
 	if(k%2==0)//
{
	
	cout<<"TERM "<<t<<" IS "<<i-t<<"/"<<k-(i-t)<<endl;
	
}else
{cout<<"TERM "<<t<<" IS "<<k-(i-t)<<"/"<<i-t<<endl;
}}





return 0;
}

