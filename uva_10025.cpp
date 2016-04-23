			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<math.h>

#include<queue>
#include<stdlib.h>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{  int t;
S(t);
	long long k,n;
	while(t--)
	{
		scanf("%lld",&k);
		if(k<0)
		k = -1 * k ;
		if(k==0)
		{ cout<<3<<endl;
		if(t!=0)
		cout<<endl;
		continue;
		}
		 n = (-1 + sqrt(1 + 8*k))/2;
		 if(n*(n+1)/2==k)
		 {
		 	cout<<n<<endl;
		 	if(t!=0)
		    cout<<endl;
			continue;
		}
		n++;//n=sqrt(n);
		while(((n*(n+1))/2 - k)%2!=0)
		n++;
		cout<<n<<endl;
		if(t!=0)
		cout<<endl;
	}






return 0;
}

