			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<queue>
#include<math.h>
#include<stdlib.h>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{		long t,x,y,z,i,j,k,count,sum;
		long a[6000],f[1000];
		int m=0,o;long u[6000];
		for(k=0;m!=5678;k++)
		{   
			bool q;
			//cout<<"factors of "<<k<<" :"<<endl;
			i=k;
			int c = 0;
			while(i%2==0)
			{	
			//	f[c]=2;
			//	c++;
				i=i/2;
			//	cout<<"2 ";
			//	q = true;
			}
			for(j=3;j<=sqrt(i);j=j+2)
			{	
				if(i%j==0)
				{	if(j>7)
					{	q = false;
						break;
					}
				//	q= true;
				//	f[c]=j;
				//	c++;
					i= i/j;
					//cout<<j<<" ";
					
				}
					
			}
		/*	if(i>2)
			{f[c]=i;
		//	cout<<i;
			
			}*/
			if(i<=7)
			{
				u[m]=k;
				m++;
			}
		/*	cout<<"c is "<<c<<endl;
			for(x=0;x<c+1;x++)
			cout<<f[x]<<" ";
			cout<<endl;*/
		//	cout<<endl;
			
		}
		while(1)
		{
			scanf("%d",&o);
			if(o==0)
			break;
			cout<<u[o];
			
		}





return 0;
}

