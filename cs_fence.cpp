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
void fr(long long int *a)
{
	register char c=0;
	while (c<33) c=getchar();
	*a=0;
	while (c>33)
	{
		*a=*a*10+c-'0';
		c=getchar();
	}
}

int main()
{

		long long  t,p,n,j,x;
		map<long long,char>m;
		map<long long,char>::iterator it,it2;
		char s;
	    fr(&t);//	S(t);
		int count;
		
		F(i,0,t)
		{		m.clear();
				count= 1;
				fr(&x);
				fr(&n);
				//scanf("%lld %lld",&m,&n);
				REP(j,0,n)
				{
						cin>>s;
						fr(&p);
						m[p]=s;
						
						
				}
				for(it=m.begin();it!=m.end();it++)
				{
					//cout<<it->first<<endl;
					if(m.size()>1)
					{
					it2= ++it;
					if(it2==m.end())
					break;
					it--;
					if(it->second!=it2->second)
					count = count * (it2->first - it->first);
					//cout<<" Chck :"<<count<<endl;
				    }
				}
				count = count % 1000000009;
				
				cout<<count<<endl;
				
		}




return 0;
}

