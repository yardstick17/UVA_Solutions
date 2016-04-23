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
long gcd(long,long);
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{ long t,x,y,z,i,j,k,n,sum,G;
	while(1)
{	
	G=0;
		scanf("%ld",&n);
		if(n==0)
		break;
		REP(i,1,n)
			for(j=i+1;j<=n;j++)
				{   //cout<<"chk"<<endl;
					 G= G + gcd(i,j);
					 
						
				}	
cout<<G<<endl;
}




return 0;
}
 long gcd(long a,long b)
{
 		int r = 1;
 		while(b)
 		{
 			r = a % b;
 			a = b ;
 			b = r ;
 		}
 		return a;
 		
 }

