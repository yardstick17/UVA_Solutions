			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<queue>
#include<string.h>
#include<stdlib.h>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{			int t,x,y,z,i,j,d,k,sum;
			char n[12];
			while(1)
			{
					scanf("%s",n);
					i= atoi(n);
					if(i==0)
					break;
					k=i;
					//cout<<" k is "<<k<<endl;
					//cin>>y;
					sum= 0;
					while(k>=10)
					{
						while(k!=0)
						{
						
							d = k%10;
							k= (k - d)/10;
							sum = sum + d;
						//	cout<<"k and d is "<<k<<" "<<d<<endl;
						}
						k= sum;
						sum=0;
					}
					cout<<k<<endl;
				//cout<<i<<endl;
			}





return 0;
}

