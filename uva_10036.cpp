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
bool b[10005][105] = { false } ;
int main()
{
  int i ,t , mod , n , a[10005] , sum  ;
  S(t) ;
  while(t--)
  {
  	 sum = 0 ;
 	cin>>n>>mod ;
  	 F(i , 0  , n)
  	 cin>>a[i] ;
  	int index ; 
	 
	 
	 memset(b ,  false , sizeof(b));
	 if(a[0] % mod < 0 )
	 index = a[0] % mod + mod ;
	 else index = a[0] % mod ;
  	 b[0][index] = true ; 
  	 //cout<<index<<endl;
  	 for(i = 1 ; i < n ; i++)
  	   {
  	   	 for(sum = 0  ; sum < mod ; sum++)
  	   	  {
  	   	 	  if(b[i-1][sum])
  	   	 	   {
  	   	 	    //b[i-1][sum] = false ;
  	   	 	   	   if((sum + a[i]) % mod < 0 ) 
					index = (sum + a[i]) % mod + mod ;
  	   	 	   	   else 
					index = (sum + a[i]) % mod; 
  	   	 	   	   
				b[i][index] = true ;
  	   	 	   	 //  cout<<sum<<" and : " <<index<<" \n";
  	   	 	 	   if((sum - a[i]) % mod < 0 ) 
					index = (sum - a[i]) % mod + mod ;
  	   	 	  	   else
					 index = (sum - a[i]) % mod ;
  	   	 		b[i][index] = true ;
  	   	 	   	 //  cout<<sum<<" and : " <<index<<" \n";
  	   	 
			  	}
  	   	 }
  	   	// cout<<endl;
  	}
  	   if(b[n-1][0] == true) cout<<"Divisible\n" ;
  	   else cout<<"Not divisible"<<endl;
  	 
  }

return 0;
}

