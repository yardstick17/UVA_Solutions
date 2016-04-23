			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<string.h>
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
	int i , x , j ,k , count , a[1000005] ;
	i = 0 ;
	while(scanf("%lld" ,&x)!=EOF)
	{
		 a[i++] = x ;
	}
	int n = i ;
	vector<int>v ;
	for(i = 0 ; i < n ;i++)
	{
		vector<int>::iterator it = upper_bound(v.begin() , v.end() , a[i]) ;
		 if(it==v.end()) v.push_back(a[i]) ;
		 else
		 *it = a[i] ;
	}
	
	long long prev = v[0] ;
	j = 1 ;
	int b[1000005] ;
	b[0] = v[0] ;
	for(i = 1 ; i < v.size() ;i++) 
	{
		if(v[i] != prev)
		{
			 b[j++] = v[i] ;
			 prev = v[i] ;
		}
	
	}
	int size = j ;
	cout<<size<<endl;
	cout<<"-\n";
	for(i = 0  ; i < size ;i++ ) cout<<b[i]<<endl;
	
	
		 //cout<<v[i]<<endl;
	



return 0;
}

