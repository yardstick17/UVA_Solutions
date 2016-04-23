			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<string.h>
#include<map>
#include<algorithm>
#include<set>
#include<queue>
#include<stdlib.h>
long long sq(long long x)
{
	return x*x;
}
long long pow(long long a,long long x){
	if(x==0)
	return 1;
	if(x%2!=0)
	return a*pow(a,x-1);
	else
	return sq(pow(a,x/2));
}
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{
  long long count=0;
  int t,j,i,k,len,p;
  char s[35];
  S(t);
  j=1;
  while(t--)
  { count = 0 ;
  	scanf("%s",s);
  	len = strlen(s);
  	//cout<<len<<endl;
  	for(i=0;i<len;i++)
  	{
  		if(s[i]=='A')
  		k=0;
  		else if(s[i]=='C')
  		k=1;
  		else if(s[i]=='G')
  		k=2;
  		else
  		k=3;
  		p= len - 1 - i ;
  		count += k*pow(4,p);
  	}
  	cout<<"Case "<<j<<": ("<<len<<":"<<count<<")"<<endl;
  	j++;
  }
 return 0;
}

