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
int prime[1000000];
bool b[1000000];
int p[1000000];
void sieve()
  { int index;
     b[1]=false;
     b[0]=false;
     for(int i = 2 ; i <=1000; i++)
       {
       	   if(b[i]==true)
       	     {
       	     	  for(int j = i*i ; i*j <= 1000000 ;j++)
       	     	    {     
       	     	          index = i * j ;
       	     	    	  b[index]=false;
       	     	    }
       	     }
       }
  	   
  }
int main()
{

   int t,count,x,i;
   
   memset(prime,0,sizeof(prime));
   memset(b,true,sizeof(b));
   sieve();
   int index = 0;
   for( i =2; i<=1000000;i++)
     {
     	  if(b[i]==true)
     	    {
     	    	  p[index]=i;
     	    	  index++;
     	    }
     }
     count = index;
/* for(int j=0;j<100;j++)
   { 
    
     
	  cout<<p[j]<<endl;   
        
   }*/
   while(1)
    {
    	  S(t);
    	  if(t==0)
    	  break;
    	  x = t ;
    	  //cout<<x<<"\n";
    	  int final = 0 ;
    	  for(i=0;i<count;i++)
    	     {
    	     	     	   if(x%p[i]==0)
    	     	     	   final++;
							while(x%p[i]==0)
    	     	     	   {
    	     	     	   	   x = x / p[i] ;
    	     	     	   	  // cout<<x<<" --> ";
    	     	     	   }
    	     	     	   if(x==1)
    	     	     	   break;
    	     	     
    	     }
    	     cout<<t<<" : "<<final<<endl;
    	  
    	  
    }




return 0;
}

