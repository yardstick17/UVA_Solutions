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
#define S(x) scanf("%lld",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{

  int t,x,y,j,i,count;
  long n,k;
  string s;
  int c[100];
  while(1)
  {
  	S(n);
  	if(n==0)
  	break;
  	k=n;
  	count = 0 ;
  	i=0;
  	while(k)
  	{ c[i] = 1&k - 48;
	  count = count + (1 & k);
  	k=k>>1;
  	i++;
  }
  cout<<"The parity of ";
  for(j=i-1;j>=0;j--)
  cout<<c[j];		
 cout<<" is "<<count<<" (mod 2)."<<endl;
}




return 0;
}

