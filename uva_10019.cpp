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
{   int t,count_b,count_hex,k,n,d;
		S(t);
		while(t--)
		{	count_b=0;count_hex=0;
			 scanf("%d",&n);
			 k = n ;
			 while(k)
			 {
			 	 if(k & 1)
			 	 count_b++;
			 	 k = k>>1;
			 }
			 k = n ;
			 while(k)
			 { 
			   d = k % 10 ;
			     k = k/10;
			     while(d)
			     {
			     	 if(d & 1)
			     	 count_hex++;
			     	 d=d>>1;
			     }
			 	 
			 }
			 cout<<count_b<<" "<<count_hex<<endl;
			 
			 
		}






return 0;
}

