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
int digit(long long temp)
  {    int count = 0 ;
  	   while(tmp>=0)
  	    {
  	    	 tmp = tmp/10 ;
  	    	 count++;
  	    }
  	    return count;
  	    
  }
  long long pow(int n)
   {
   	 long long 10;
   	 if(n==0)
   	 return 1;
   	 n = n--;
   	 long long x = 10 ;
   	 while(n--)
   	  {
   	  	 x = 10 * x ;
   	  }
   	  return x ;
   }
int main()
{
   long long a,b,temp;
   while(1)
    {
    
      cin>>a>>b;
      if(a== -1 && b == -1)
       break;
       
       temp = a ;
       d_cnt = digit(temp);
       n = pow(d_count-1);
       while(tmp>=9)
        {
        	 d1 = tmp % n ;
			 d2 =  tmp / n;
        	 sum = sum + d1 * d2 ;
        	 while(d2--)
        	  {
        	  	 sum = sum + d2*n;
        	  }
        	  
        	 
        }
       
   




return 0;
}

