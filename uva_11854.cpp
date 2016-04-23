			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
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
 long a[10];
 while(1)
 {  scanf("%ld%ld%ld",&a[0],&a[1],&a[2]);
 	if(a[0]==0 && a[1]==0 && a[2]==0)
 	break;
 	sort(a,a+3);
 	
	 if(a[2]*a[2]==a[0]*a[0] + a[1]*a[1])
 	cout<<"right"<<endl;
 	else
 	cout<<"wrong"<<endl;
 		
 }





return 0;
}

