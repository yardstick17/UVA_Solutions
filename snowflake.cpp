			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<algorithm>
#include<map>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{  int t,j,n,x,y,l,k,tail,count;
	int a[1000]={0},c,q;
	map<int,int>m;
	S(t);
	F(i,0,t)
	{		count= 0;
			S(n);
			l=1;
			c=0;
			m.clear();
			tail = 0;
			REP(j,1,n+1)
			{		y=0;
				//	q=tail;
					S(x);
					a[l]=x;
					l++;
					if(m.find(x)==m.end())
				{
					m[x]=j;
				 }
					else{
					
					y=1;
					tail= m.find(x)->second; 
					q= m.find(a[c])->second;
					if(q>tail)
					k= j - q;
					else
					k = j - tail;
					
					
					//q= tail + 1; //tail= m.find(x)->second; 
						m[x]=j;
					cout<<"Ckeck K: "<<k<<endl;
					if(count < k)
					count = k;//j-tail;//	cout<<"GAAND";
					c=j;
			 		
			   		 }
			   		 if(y==0){
			   		 
			   		 k= j - tail;
			   		 if(count < k)
						count = k;}
			   		 
		}
			 cout<<count<<endl;
				}






return 0;
}

