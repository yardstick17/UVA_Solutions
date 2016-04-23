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
  while(1)
  {
  	 int n ;
  	 S(n) ;
  	 if(n==0)
  	 break;
  	 int b[n] , a[n] ;
  	 int j = 0 ;
  	 F(i , 0  , n)
  	  {
  	  	  cin>>a[i] ;
  	  	  if(a[i]!=0)
  	  	  b[j++] = a[i] ;
  	  }
  	  int i ;
  	  for(i = 0 ; i < j ; i++)
  	   {
  	   	 if(i==0)
  	   	  cout<<b[0];
  	   	  else
  	   	  cout<<" "<<b[i];
       }
       if(j==0)
       cout<<"0\n";
       else
       cout<<"\n";

}



return 0;
}

