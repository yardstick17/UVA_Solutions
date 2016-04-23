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

    int t,n,s,d,u,v,a[1000],i,diff,dis,j;
    scanf("%d%d",&u,&v);
    scanf("%d%d",&t,&d);
    diff = v - u ;
    t = t- 1 ;
    memset(a,d,sizeof(a));
    dis = d * t ;
    a[0] = 0 ;
    for(i = 0 ; i < t  ;i++)
     {
     	dis = dis - d ;
		for(j = -d ; j<= d ;j++)
		  {
		  	 if(dis + j >= diff)
		  	  {   dis = dis + j; 
		  	  	  a[i] = j;
		  	  	  break;
		  	  }
		  	   
		  }   
     }
    // REP(i,0,t)
      //cout<<a[i]<<" ";
      
      dis = u;
      int sum=u;
      for(i = t-1 ;i >=0 ;i--)
        {   
		  dis = dis + a[i];
		  sum = sum + dis;//
		  //cout<<"sid s :"<<sum<<" ";
        }
        cout<<sum<<endl;

    




return 0;
}

