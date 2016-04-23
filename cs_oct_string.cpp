			/* AK_47*/
#include<cstdlib>
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
{ int t,i,s,n,k,a,b,m;
	int len1,len2;
	S(t);
	string s1,s2;
	F(i,0,t)
	{		s=0;
			cin>>s1;
			cin>>s2;
			cin>>a>>b>>m;
			if(2*a<=b)
			b=2*a;
	len1= s1.length();
	len2 = s2.length();
	if(len1>len2)
		n=len2;
		else
		n= len1;
		F(i,0,n)
		{
			if(s1[i]!=s2[i])
			s= s + b;
		}
		k= abs(len1-len2);
		s =  s + k*a; 
	if(s<=m)
	cout<<s<<endl;
	else
	cout<<-1<<endl;

	}






return 0;
}

