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
#include<math.h>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{
	long long z,i=1,d,n,count;
	double s,h;
	d = 0 ;
	while(1)
	{   d= 0 ;
		scanf("%lld",&n);
		if(n==0)
		break;
		
	//	s = 3 ;
		s = (3 + sqrt(9 + 8*n))/2;
		d = s ;
		if(s-d>0)
		cout<<"Case "<<i<<": "<<d+1<<endl;
		else
		cout<<"Case "<<i<<": "<<d<<endl;
		i++;
	/*	while(n>d)
		{  
			d = s* (s - 3 ) / 2 ;
			s++;	
		}
		cout<<s-1<<endl;*/
		
	}





return 0;
}

