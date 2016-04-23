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
	long long n,t,x,y,z,sum,i,j,k;
	int count=0;
	for(i=0;;i++)
	{	if(count==11)
		break;
		sum=0;
		n=(i-1)*i/2;
			for(j=i+1;sum<=n;j++)
				{ 	sum = sum + j;
							if(sum==n)
							{count++;
							cout<<i<<" "<<j<<endl;
							break;
							}
				}
				
					
	}
	
	




return 0;
}

