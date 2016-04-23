			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<math.h>
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
	int t,x,y,z,i,j,k,a[100],n,c[100];
	V(int)v;
	while(1)
	{   
		scanf("%d\n",&t);
		if(t==0)
		break;
	
		while(t--)
		{ S(x);
		cout<<x<<" = ";
			n=0;
		
		k = x;
		
		if(x<0)
		{
			k= -1 * k; 
			cout<<"-1 x ";
		}
		
		while(k%2==0)
		{
			v.pb(2);//,c[n]=2;
		//	cout<<"2 ";
		//	n++;
			k = k / 2 ;
		}
		for(j=3;j<=sqrt(k);j+=2)
		{
			while(k%j==0)
			{ k = k / j;
				v.pb(j);//,c[n]=j;
			//	cout<<j<<" ";
			//	n++; 
				
			}
		}
		if(k>2)
		v.pb(k);//,c[n]=k,cout<<k<<endl;
		
		for(i=0;i<v.size()-1;i++)
		cout<<v[i]<<" x ";
		cout<<v[i]<<endl;
		v.clear();
		
	}
		
		
	}
	






return 0;
}

