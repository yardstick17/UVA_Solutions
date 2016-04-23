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

		long long  t,i,j,k,index,len,str_rev,str_val;
		char str[100008];
		int g;
		long long base_inc = 1 ;
		long long base = 1000000007;
		long long mod =  2096725343;
		while(cin>>str)
		{
			 len = strlen(str);//).length();
			 
			 base_inc = 1;
			 index = 0 ;
			 str_rev=0;
			 str_val=0;;
				for(k=len-1; k>=0; k--)
			  {
			  	 str_rev = (str_rev* base + str[k]) % mod ;
			  	 str_val = (str_val + base_inc*str[k]) %mod;
			  	 base_inc = (base * base_inc) % mod;
			  	 if(str_rev==str_val)
			  	 index =  k ;
			  }
			  
			  printf("%s",str);
			  for(i = index-1; i >= 0; i-- )
			  printf("%c",str[i]);
			  printf("\n");
			  
		}




return 0;
}

