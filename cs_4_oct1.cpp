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
		vector<long>v;
		int t,r,g,j,b,m;
		long x,maxr,maxg,maxb;
		scanf("%d",&t);
		for(int i=0;i<t;i++)
		{ 	v.clear();
			scanf("%d %d %d %d\n",&r,&g,&b,&m);
			maxr=0;
			for(j=0;j<r;j++)
			{ scanf("%ld",&x);
				if(x>maxr)
				maxr=x;
			} maxg=0;
				for(j=0;j<g;j++)
			{	scanf("%ld",&x);
				if(x>maxg)
				maxg=x;
			} maxb=0;
				for(j=0;j<b;j++)
			{ scanf("%ld",&x);
			if(x>maxb)
			maxb=x;
			}
		//	cout<<"red max id :"<<maxr<<endl;
		//	cout<<"green max is "<<maxg<<endl;
		//	cout<<"blue max is "<<maxb<<endl;
			v.pb(maxr);
			v.pb(maxg);
			v.pb(maxb);
			for(j=0;j<m;j++)
			{
					sort(v.begin(),v.end());
					//cout<<v[2]/2<<endl;
					v[2]=v[2]/2;
				//	cout<<" series  is : "<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
					
			}
			sort(v.begin(),v.end());
			cout<<v[2]<<endl;
			
			
			
			
		}




return 0;
}

