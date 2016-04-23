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
map<int,string>m;
map<int,string>m2;



int main()
{ 
  m[1] = "one";
m[2] = "two";
m[3]="three";
m[4] = "four";
m[5] = "five";
m[6] = "six";
m[7] = "seven";
m[8] = "eight";
m[9] = "nine";
m[0] = "zero";
m[10] = "ten";
m[11]="eleven";
m[12]="twelve";
m[13] = "thirteen";
m[14]="fourteen";
m[15]="fifteen";
m[16] = "sixteen";
m[17]="seventeen";
m[18]="eighteen";
m[19]="nineteen";
m[20]="twenty";
m2[2]="twenty";
m2[3]="thirty";
m2[4]="forty";
m2[5]="fifty";
m2[6]="sixty";
m2[7]="seventy";
m2[8]="eighty";
m2[9]="ninety";

  int t;
  S(t);
  if(t<=20)
  cout<<m[t]<<endl;
  else
  {
  	  int x = t % 10 ;
  	 // cout<<m2[x]<<"-";
  	  x  = (t - x)/10 ;
  	  cout<<m2[x];
  	  x = t % 10 ;
  	  if(x>0)
  	  cout<<"-"<<m[x]<<endl;
  	  
  	  
  }
  





return 0;
}

