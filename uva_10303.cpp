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
long long gcd(long long a,long long b)
{
	int r;
	while(b)
	{
		 r = a%b;
		 a = b;
		 b = r;
	}
	return a;
}
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{
    double count,num,den;
	int k,n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==1)
		{ cout<<1<<endl;
		continue;
		}
	
		num = 1 ;
		den = 1;
		k = 2 ;
		while(k<=n)
		{
			 num = num * (n + k);
			 den = den * k;
			 count = gcd(num,den);
			 num = num / count;
			 den = den / count;
			 k++;
			 
		}	
		cout<<num<<" "<<den<<" "<<num/den<<endl;
	}



return 0;
}

