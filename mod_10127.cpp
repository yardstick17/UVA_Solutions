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
	long long t,x,y,z,i,j,k,n,count,d,b;
	while(scanf("%lld",&n)!=EOF)
		{		if(n==1)
				{
					cout<<1<<endl;
					continue;
				}
				count = 1;
				d=1,x=10;
				while(1)
				{
					if(n<x)
					break;
					else
					{
						d++;
						x *= 10;
					}
				}
				
				x=1; b=10;
				REP(i,0,d-1)
				{
					x = x + b;
					b = b*10;
				}
				
		//	cout<<x<<endl;
				for(i=0;;i++)
				{
					if(x%n==0)
					break;
					else
					{
						
					x = x + b;
					b = b*10;
					b = b % n ;
					d++;	
					}
					
				//	cout<<x<<endl;
				}
				cout<<d<<endl;
			//	while()
						
		}





return 0;
}

