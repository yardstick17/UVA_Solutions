			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<cmath>
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

long long cnt = 0 ;
map< char, int> m;
int mod = 31;
int base = 27 ;
int sq(int x)
{
  return (x%mod * x%mod)%mod; 
}

int pow(int base,int p)
{
	if(p==0)
	return 1 ;
	else if(p%2==0)
	return (sq(pow(base,p/2)%mod)%mod)% mod;
	else if(p<0  || p>200)
	return 0 ;
	return (base*(pow(base,p-1)%mod))%mod;
}
void mapping()
{
	F(i,1,28)
	m[(char)( 96 + i )] = i;

}
long long RabinKarp(string a,string t)
{
	 int alen = a.length();//length();
	 int tlen = t.length();
	 //cout<<alen<<" "<<tlen<<" "<<endl;
	 int pv = 0 ;
	 int tv = 0 ;

	                   // Determing pattern hashvalue of pattern text //
	 F(i,0,alen)                                     
	 {                               
	 	 pv = (pv + ( m[a[i]] * pow(base,(alen - 1  - i)))%mod) % mod;  
	 	 tv = (tv + (m[t[i]]*pow(base,(alen - 1 - i)))%mod) % mod;
	}
	 int flag = 0 ;
	 for(int i = 0 ; i < tlen - alen + 1  ;  )//zadugarF(i,0,tlen - alen+1)
	 {  flag = 0 ;
	    if(tv == pv)
		 {   
		 	flag = 1 ;
		 	int j ; 
		 	 REP(j,0,alen)
		 	 {
		 	 	if(t[i+j] != a[j])
		 	 	  {
		 	 	  	break;
		 	 	  }
		 	 	 
		 	  }
		 	  if(j == alen)
		 	  cnt++,i = i + alen;//cout<<" pattern found at "<<i<<" \n";
              else
			  i++; 		 
		 }
		 if(!flag)
		 i++;
		  
		 
		 	 tv = ((tv*base)%mod - (m[t[i]]*pow(base,alen))%mod + m[t[i + alen]] % mod) % mod; // sliding one letter at a tym.
		 	 if(tv<0)
		 	 tv = tv + mod;
			
			  
			  
		  }
		  return cnt;
	  
}

int main()
{
  mapping();
  string s;
  string test;
  s = "adadad";
  test = "ad";
  int te = RabinKarp(test,s);
  
                                                      //cout<<pow(2,10)<<" "<<pow(3,3)<<" "<<pow(2,4)<<endl;
  while(cin>>s)
  {
  	if(s[0]=='.')
  	break;
  
  //string n_str="";
  // c[10];
  int k = s.length();
  
  long long maxi = 0 ;
  
  F(i,1,s.length()/2+1)
   { 
    cnt = 0 ;
    char n_str[1000001];
    string strn(s,0,i);
    
  	int ans = RabinKarp(strn,s);
  	cout<<strn<<" : "<<ans<<"\n";
  	if(i*ans==k)
  	{
  	
	  if(ans>maxi)
  	   maxi = ans;
    }
  }
  cout<<maxi<<"\n";
   }
return 0;
}

