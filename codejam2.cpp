			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<climits>
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
	  int t,time_final,n,a[1010],x,iter,cs;
	  S(t);
	  cs = 1 ;
	  while(t--)
	    {     
		      priority_queue<int>pq;
               S(n);
               iter = 0 ;
	    	  F(i,0,n)
	    	    {
	    	    	 S(a[i]);
	    	    	 pq.push(a[i]);
	    	    }
	    	    time_final= INT_MAX;
	    	    while(pq.top()!=1)
	    	      {   
	    	          x = pq.top();
	    	      	  time_final = min(x + iter,time_final);
	    	      	  pq.pop();
	    	      	  //cout<<" top elem: "<<x<<endl;
	    	      	  if(x%2==0)
	    	      	  { 
	    	      	  	 pq.push(x/2);
	    	      	  	 pq.push(x/2);
	    	      	  }
	    	      	  else
	    	      	   { 
	    	      	   	 pq.push(x/2);
	    	      	   	 pq.push(x/2+1);
	    	      	   }
	    	      	   iter++;
	    	      	   
	    	      	   
	    	      }if(n==1)
	    	      { 	    	      cout<<"Case #"<<cs<<": "<<a[0]<<endl;
	    	      cs++;

	    	      }
	    	      else
	    	      {
	    	      	 cout<<"Case #"<<cs<<": "<<time_final<<endl;
	    	         cs++;
	    	      }
	    	      
	    	     // time_final = time_final + pq.top()-1;
	    	     
	    	    
	    }






return 0;
}

