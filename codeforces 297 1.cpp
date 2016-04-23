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
   int t;
   scanf("%d",&t);
   map<int,int>s;
   string str;
   cin>>str;
   int count = 0 ,i;
   map<int,int>::iterator it ;
   int len = str.length();
   for(i=0;i<len-1;i = i + 2  )
     { 
        s[str[i]-32]++;//s.insert(str[i]-32);
        it = s.find(int(str[i+1]));
        if(it !=s.end() && s[str[i+1]]!=0)
         {
         	  s[str[i+1]]--;//.erase(it);
         }
         else
         count++;
         
		// i++;
     	 
     	  
     }
     cout<<count<<endl;






return 0;
}

