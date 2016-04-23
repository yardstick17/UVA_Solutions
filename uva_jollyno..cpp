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

set<int>s;
set<int>::iterator it;
int t,a[3500],i,x,k,fg=0;
while(scanf("%d",&t)!=EOF)
{	s.clear();
	F(i,0,t)
	{
		cin>>a[i];
	}
	if(t==1)
	{
			cout<<"Jolly"<<endl;
			continue;
	}
	if(t==2)
	{
		x = abs(a[0] - a[1]);
		if(x==1)
			cout<<"Jolly"<<endl;
			else
			cout<<"Not jolly"<<endl;
			continue;
			
	}
	F(i,0,t)
	{
			if(i<t-1)
			{	//cout<<" numbers are!"<<a[i+1]<<" and "<<a[i]<<endl;
				s.insert(abs(a[i+1] - a[i]));
			}
			
	}
	
/*	k=1;
	for(it = s.begin();it!= s.end();it++)
	{ 
		if(*it!=k)
		{
			fg=1;
		//	cout<<"Not jolly"<<endl;
		//	break;
			
		}
		k++;
		
		
	}*/
//	cout<<" value: "<<k<<endl;
/*	if(fg==1 || k!= t-1)
    cout<<"Not jolly"<<endl;   //	continue;
	else
	cout<<"Jolly"<<endl;
	*/
	
	it = s.end();
	it--;
	if(*it == t-1 && s.size() == t-1 )
	cout<<"Jolly"<<endl;
	else
	cout<<"Not jolly"<<endl;
	
	
}

return 0;
}

