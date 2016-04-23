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
{ int t,h1,h2,hf,mf,m1,m2;
	while(1)
	{
		scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
		if(h1==0 && h2==0 && m1==0 && m2==0)
		break;
		if(m2<m1)
		m2 = m2 + 60,h2--;
		if(h2<h1)
		h2 = h2 + 24 ;
		mf = m2 - m1 ;
		hf = h2 - h1;
		cout<<hf*60 + mf<<endl;
		
	}






return 0;
}

