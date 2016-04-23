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
{
    int t,n,m,x;
    int s=0;
    
	S(t);
    
	F(i,0,t)
	{	s=0;
		cin>>n>>m;
		F(j,0,n)
		{
			cin>>x;
			//v.push_back(x);
			 s = s + x;
		}
		if((s + m)%n==0)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}





return 0;
}

