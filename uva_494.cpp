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
{		int t,count,k,i,j;
			
			count=1;
			char c[100000],d[1000000];
		//	scanf("%s\n",&c);
			while(gets(d))
			{ count = 1; 
			
			//gets(d);
		//	cout<<" c is :"<<c<<endl;
		//	cout<<" d is :"<<d<<endl;
					if(!((d[0]>64 && d[0]<91)||( (d[0]>96 && d[0]< 123))))
					{ count--;
					}
			for(i = 0 ; d[i]!='\0'; i++)
				{ //cout<<d[i]<<" ";
					if(!((d[i]>64 && d[i]<91)||( (d[i]>96 && d[i]< 123))))
                  {
                  
					if(((d[i+1]>64 && d[i+1]<91)||( (d[i+1]>96 && d[i+1]< 123))))
					count++;
				//	if(d[i]<97)
				//	cout<<"ksjvsvkj"<<endl;
				}
					}
				cout<<count<<endl;
		}





return 0;
}

