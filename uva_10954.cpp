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
class Compare {
public:
    bool operator()(int& t1, int& t2)
    {	
    	//if(t1>t2)
    	//return t2;
    	
       /*if (t1.h < t2.h) return true;
       if (t1.h == t2.h && t1.m < t2.m) return true;
       if (t1.h == t2.h && t1.m == t2.m && t1.s < t2.s) return true;*/
       return t1>t2 ;
    }
		};

int main()
{

		int t,x,y;
		while(1)
		{
			priority_queue<int,vector<int>,Compare>pq;
			cin>>t;
			if(t==0)
			break;
			F(i,0,t)
			{
			
				cin>>x;
				pq.push(x);
			}
			int sum = 0;
			if(pq.size()==1)
			{
				cout<<"0"<<endl; //pq.top()<<endl;
				pq.pop();
				continue;
			}
			while(1)
			{
					x=pq.top();
					pq.pop();
					
					y=pq.top();
					pq.pop();
					//pq.push(x + y);
					sum = sum + x + y;
					
					if(pq.size()==0)
					break;
					pq.push(x + y);  
			}
			cout<<sum<<endl;
	//	cout<<pq.top()<<endl;;
	//	pq.pop();
	//	cout<<pq.top()<<endl;
	}
		
				




return 0;
}

