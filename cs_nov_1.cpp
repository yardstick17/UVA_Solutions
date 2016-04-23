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
 int t;
 string s;
 //map< char , int > m;
 set<char> m;
 cin>>t;
 while(t--)
{	m.clear();
	cin>>s;
	for(int i= 0 ;i< s.length();i++)
	{
		 m.insert(s[i]);	 
	}
 	 cout<<m.size()<<endl;
 }





return 0;
}

