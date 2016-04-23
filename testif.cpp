			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{  pair<int,int>pii;
	set< pair<int,int> >s;
	pii=make_pair(2,5);
	s.insert(pii);
	pii=make_pair(2,6);
	s.insert(pii);
	pii= make_pair(2,4);
	if(s.find(pii)!=s.end())
	cout<<"dhamaka0";
//	int p = *s.begin()->first;
		//cout<<p<<endl;//*s.begin()<<" "<<endl;
  






return 0;
}

