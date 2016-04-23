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
   long long  a[1000005];
      long long int l[1000005];


int main()
{
   long long t;
   //S(t);
  // map<int,int>m;
  cin>>t;
   F(i,0,t)
   {
    cin>>a[i];
   
   
   }   
   long long int index=0,flag = 0,sum = 0  ; 
   sort(a,a+t,greater<long long int>());
  for(int i = 0;i<t-1;i++)// F(i,0,t-1)
    {
    	  if(a[i]-a[i+1]==1 || a[i]==a[i+1])
    	   { 
    	     l[index]=a[i+1];
    	     i++;
    	     index++;
    	     
    	   }
    	   
	}
    for(int i = 0 ; i < index-1 ; i = i +  2)
      {
      	  sum = sum + l[i]*l[i+1];
      	  
      }
    cout<<sum<<endl;


return 0;
}

