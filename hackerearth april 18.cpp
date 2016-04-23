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
    int t,n,q ,len,i,j,k,x;
    S(t);
    string str[1000],s[1000];
    while(t--)
     {
     	  scanf("%d%d",&n,&q);
     	  i = 0 ;
     	  k = n  ;
     	  while(k--)
     	    {
     	    	  cin>>str[i];
     	    	  i++;
     	    }
     	    
     	    i = 1 ;
     	    s[0] = str[0];
     	    k = n-1;
     	     while(k--)
     	      {
     	      	  s[i] = s[i-1] ;
     	      	  len = s[i-1].length();
     	      	  for(j = len -1  ; j >=0 ;j--)
     	      	    {
     	      	    	 s[i] = s[i] + s[i][j];
     	      	    }
     	      	    s[i] = s[i] + str[i];
     	      	    i++;
     	      }
     	    
     	    //cout<<s[n-1];
     	    
     	    while(q--)
     	     {
     	     	  cin>>x;
     	     	  cout<<s[n-1][x];
     	     	  
     	     }
     	     cout<<"\n";
     }





return 0;
}

