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
   int t,i,flag = 0 ,num,a[1005];
   S(t);
   num = 1 ;
   for(i = 0;i<t;i= i + 2)
     {  
       a[i] = num++;
     	 
     }
     for(i = 1 ;i < t ;i = i + 2)
     a[i] = num++;;
  /* for(i = 0 ;i < t ;i++)
     {
     	 cout<<a[i]<<" ";
     }*/
     int count = 0;
   REP(i,0,t)
     {   count++;	 
        if(a[i+1]-a[i]==1 || a[i+1] - a[i] == -1)
		 {   flag = 0 ;
		 	 break;
		 }
		 
     }
	 if(t==4)
	 {
	 	 cout<<"4"<<"\n3 1 4 2";
	 }
	 else {
	 
     cout<<count<<endl;
        for(i = 0 ;i < count ;i++)
         cout<<a[i]<<" ";
     
		
		 } 


return 0;
}

