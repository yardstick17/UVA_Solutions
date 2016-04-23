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
map< pair<int,int> ,int>m;
pair<int,int>p;

int t,n,q,a[10000],u,v;
scanf("%d%d",&n,&q);
F(i,1,n+1)
{
scanf("%d",&a[i]);
p=make_pair(a[i],i);
m[p]=i;
}
//scanf("%d",&t);


while(scanf("%d%d",&u,&v)!=EOF)
{ 
p= make_pair(u,v);
if(m.find(p)!= m.end())
cout<<m[p]<<endl;
else
cout<<"0"<<endl;
	
}




return 0;
}

