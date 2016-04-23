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
{


long g= gcd(25,105);
cout<<g<<endl;



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


