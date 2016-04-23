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
int max(int a,int b)
{

return a>b?a:b;}
int maxsumarray(int a[],int n)
{
	int curr_max = a[0],max_sofar=a[0],curr;
	F(i,1,n)
	{
		curr_max = max(a[i],curr_max + a[i]);
		
		max_sofar = max(curr_max,max_sofar);
	}
	return max_sofar;
	
	
	
}

int main()
{   			
		int t,x,y,z,i,j,k,sum,count,n,a[10009];
		while(1)
		{
			S(n);
			if(n==0)
			break;
			REP(i,0,n)
			S(a[i]);
			x = maxsumarray(a,n);
			if(x>0)
			cout<<"The maximum winning streak is "<<x<<"."<<endl;
			else
			cout<<"Losing streak."<<endl;
			
		}
		






return 0;
}

