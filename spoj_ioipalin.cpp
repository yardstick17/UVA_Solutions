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
  string str;
  int a[300],n,k,len,g;
  set<int>s;
  pair<int,int>p[300];
  pair<int,int>pa;
  bool space = false;
  
  
  while(getline(cin,str))//)cin>>str)
 {  if(space)
 	printf("\n");
     memset(a,0,sizeof(a)); 
     s.clear();
  	 len = str.length();
  	 k = len;
  	 bool b[300];
  	 memset(b,false,sizeof(b));
  	 memset(a,0,sizeof(a));
	  F(i,0,k)
	  {
	 
	  	 a[(int)str[i]]++;
	  	 s.insert((int)str[i]);
	  	
	  }
	  n = s.size();
	  F(i,0,300)
	   {
	   	 pa = make_pair(-a[i],i);
	   	 p[i] = pa;
	   	 
	   }
	   sort(p,p+300);
		for(int i = n-1;i >=0;i-- )
	   cout<<p[i].second<<" "<<-p[i].first<<endl;
	   space = true;
	   
	   
	    
  }

return 0;
}

