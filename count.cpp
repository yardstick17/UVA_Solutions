			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
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
{ 		long long t,i,j,k,x,y,nx,ny,a[20000]={0},b[20000]={0};
		vector<long long>v(20000),v2(20000);
		vector<long long>::iterator it;
		cin>>t;
		while(t--)
		{		v.clear();
				v2.clear();
				cin>>x>>y;
				nx=x;
				ny=y;
				
				while(nx--)
				{
					cin>>i;
					a[nx]=i;
					//nx--;
				}
				while(ny--)
				{
					cin>>i;
					b[ny]=i;
					//ny--;
				}
				sort(a,a+x);
				sort(b, b + y );
				F(i,0,x)
				{
					cout<<a[i]<<" ";
				}
				it=set_difference(a,a+x,b,b+y,v.begin());
				v.resize(it-v.begin()); //(20000,0);//it-v.begin());
			//	cout<<"size of v : "<<v.size()<<endl;
				it=set_difference(b,b+y,a,a+x,v2.begin());
				v2.resize(it-v2.begin()); //20000,0);//it-v2.begin());
			//	cout<<"size of v2 : "<<v2.size()<<endl;
				cout<<v.size() + v2.size()<<endl;
				
				
		}
	
/*
int t;
long long x[10000]={0},y[10000]={0};
long long nx,ny,a,count,n;
map<long long,long>mx,my;
cin>>t;
while(t--)
{		count=0;
		x[10000]={0};
		y[10000]={0};
		cin>>nx>>ny;
		//n=nx;
		
		while(nx--)
		{	
			cin>>a;
			mx[a]++;
			
			
		}
		while(ny--)
		{
			cin>>a;
			my[a]++;
		}
		map<long long,long>::iterator it=
		n=10000;
		while(n--)
		{
			count = count + abs(x[n]-y[n]);
		}
		cout<<count<<endl;
		
}



*/

return 0;
}

