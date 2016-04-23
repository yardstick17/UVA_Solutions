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
long long sq(long long x)
{
	 return x*x;
}
long long pow(long long a,long long b)
{
	  if(b==0)
	  return 1 ;
	  else if(b%2==1)
	  return (a*pow(a,b-1));
	  else
	  return sq(pow(a,b/2));
}
long long offset_func(int digit)
  {
  	    long long x,offset=0;;
  	    int y = digit;
  	    while(y--)
  	      {
  	      	  offset = offset + pow(2,y); 
  	      }
  	      return offset-1;
  }

int main()
{
   long long t,x,i;
   cin>>t;
   int n;

   x = t ;
   int digit = 0 ;
   int a[50];
   
   while(x)
     {
     	    n = x % 10 ;
     	    a[digit] = n ;
			x = x / 10;
     	   
     	   digit++;
     }
     
        
     x = digit ;
     long long offset = offset_func(digit);
     // cout<<offset<<endl;
	 while(digit--)
	   {    
	
	   	    
	   	    if(a[digit]==7)
			    {
			         offset = offset + pow(2,digit);    	 
			    }  
	   }
	   cout<<offset+1<<endl;   





return 0;
}

