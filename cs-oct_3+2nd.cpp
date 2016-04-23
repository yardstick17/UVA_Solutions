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

		long t,x,y,z,s,count=0;
		S(t);
		F(i,0,t)
		{	s=0;
		count=0;
			S(x);
			F(j,0,x)
			{ S(y);
			
			if(y>0)
			{
				
				s = s + y;
			}
			else
			count++;
		}
		
		cout<<s*count<<endl;}




return 0;
}

