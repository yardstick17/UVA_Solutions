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
  long t,x,y,z,j,k,count=1;
	while(1)
	{	count=0;
		scanf("%d",&t);
		if(t==0)
		break;
		z=1;
		while(t>z*z)
		{
		//	count++;
			z++; 	
		}
		x= t - (z-1)*(z-1);
		//cout<<z<<endl;
		if(z%2==0)
		{  if(x<=z )
				cout<<x<<" "<<z<<endl;
				else
				cout<<z<<" "<<2*z - x <<endl;
		}
		else
		{
			if(x<=z)
			cout<<z<<" "<<x<<endl;
			else
			cout<<2*z - x<<" "<<z<<endl; 
		}
	}





return 0;
}

