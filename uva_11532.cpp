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
  int i , t , j , k , count , ones , zeros  ;
  cin>>t ;
  while(t--)
  {
  	  cin>>ones>>zeros;
  	  int a[ones + zeros ] ;
  	  i = 0 ;
  	  int index  =  ones + zeros -  1; 
  	  int o = ones ;
  	  int z = zeros ;
  	  if(o > z)
  	  {
  	  	  int x = o -  2 * z ;
  	  	  if(x>=0)
			{
  	  	  		while(x--)
  	  	  		a[index--] = 1 ;
  	  			o  =  o - x ;
			}
			
  	  	  
  	  	  while(index>=0)
  	  	  {
  	  	  	  
		//	  cout<<" o is : "<<o<<" and index : "<<index<<" \n";
  	  	  	  if(o >= 1) a[index--] = 1 , o-- ;
			  
		//	  cout<<" z is : "<<z<<" and index : "<<index<<" \n";
  	  	  	  if(z>=1) a[index--] = 0 , z-- ;
  	  	  	  
		//	  cout<<" o is : "<<o<<" and index : "<<index<<" \n";
  	  	  	  if(o>=1) a[index--] = 1 , o-- ; 
  	  	  	 // cout<<"\n\n";
  	  	  	  
			  if(index<0) break;
	
  	  	  }
  	  	  
  	  }
  	  else
  	  {
  	  	  while(index>=0)
  	  	  {
  	  	  	  if(o>=1) a[index--] = 1 , o-- ;
  	  	  	  if(z>=1) a[index--] = 0 , z-- ;
  	  	  	  if(o>=1) a[index--] = 1 , o-- ; 
  	  	  	  if(index<0) break;
  	  	  }
  	  }
  	 for(i = 0 ; i < ones + zeros ;  i++) // ones + zeros ; i++)
  	   {
  	   	  cout<<a[i];
  	   }  
		 cout<<endl;
	long long int sum = 0 , d = 1;
  	 for(i = ones + zeros - 1 ; i >= 0 ; i--) // ones + zeros ; i++)
  	   {
  	   	   if(a[i]==1) sum = sum + d , d = d*2 ;
				else d = d * 2 ; // +  2*sum ; 
  	   }
  	   cout<<sum<<endl;
  }





return 0;
}

