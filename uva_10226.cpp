			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include <iomanip>
#include<map>
#include<algorithm>
#include<map>
#include<string.h>
#include<stdlib.h>

using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{  // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int i,j,k,t,y;
	double f,p;
	map<string,int>m;
	map<string,int>::iterator it;
	//string s;//
	char s[40];
	long int total = 0;

	total = 0 ;
	m.clear();
	scanf("%d\n",&t);
//	scanf("\n");   
                     //	getchar();               	
  while(t)
  {
   t--;
   m.clear();
  
   //for(i=0;i<t;i++)               
	//   m.clear();
		total=0;
	                               
		
	
	while(1)
	               
		{	gets(s);//cin>>s;
		    if(strlen(s)==0)
				break;                           
	                               
	    	m[s]++;
			total+=1;
    	}
	for(it=m.begin();it!=m.end();it++)
		{ 
		p=  (double) it->second/total*100;
		cout<<it->first<<" "<<fixed<<setprecision(4)<<p<<endl;
		}
		cout<<endl;//printf("\n"); //scanf("\n");

	
	}
	

return 0;
}

