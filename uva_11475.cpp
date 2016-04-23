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
int mod =79;
int g;
long long s[200];
long long sq(long long x)
{
	 return (x*x)%mod;
}
long long pow(long long base, long long d)
{
	 if(d==0)
	 return 1 ;
	 else if(d%2==1)
	 return (base*pow(base,d-1))%mod;
	 else
	 return sq((pow(base,d/2))%mod) % mod;
}
void Mapping()
{
	 F(i,1,120)
	 s[i]=i;
}

int main()
{
	  int t,len,str_val,str_val_rev,i;
	  Mapping();
	  char str[10000];
	  while(cin>>str)
	  {
	  	 len = strlen(str);//.length();
	  	 i = 0 ;
	  	 str_val = 0 ;
	  	 str_val_rev = 0 ;
	  	 k = len-1 ;
	  	 while(k--)
	  	   { 
	  	   	 str_val = (str_val + (s[str[k]-'0']*pow(73,i)) %mod) % mod;
	  	   	 str_val_rev = (str_val_rev + (s[str[k] - '0']*pow(73,(len-1-i))%mod )) %mod;
			 i++;
	  	   }
	  	   
	  }








return 0;
}

