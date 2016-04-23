			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<queue>
#include<climits>
#include<stdlib.h>

using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
set<int>se;
int d[10000000];

class Graph{
	int V;
	list<int> *adj;
	public:
		Graph(int V);
		void addedge(int u,int v);
		void BFS(int s,int target);
};


  Graph::Graph(int V)
  {
  	this->V = V;
  	adj = new list<int>[V];
  }
  void Graph::addedge(int u,int v)
  {
  
  adj[u].push_back(v);}


  void Graph::BFS(int s,int target)
  {
    
	bool *visited = new bool[V];
	bool flag = 0;
  	list<int>::iterator k;
	  F(i,0,V)
		  {
		  d[i]=INT_MAX;
		  visited[i]=false;
		  }
	  list<int>queue;
	  visited[s] = true;
	  d[s]=0;
	  queue.push_back(s);
	  while(!queue.empty())
	  {
	  	s = queue.front();
	  	queue.pop_front();
	  	
	  	for(k=adj[s].begin();k!=adj[s].end();k++)
	  	{
	  		if(!visited[*k] && (se.find(*k)==se.end()))
	  		{
	  			visited[*k]=true;
	  			queue.push_back(*k);
	  			d[*k]=1 + d[s];
	  			if((*k)==target)
		  			{
		  				cout<<d[*k]<<endl;
		  			    flag = 1;
		  			    break;
		  			}
		  
	  		
	  		}
	  	}
	  	if(flag== 1)
		    break;	 
		}
	  if(flag==0)
	  cout<<-1<<endl;
  	
  }
  

int main()
{  
		int t,f,fr[1000],source,target,a[4],b[4],m,k,i,value,n,l,p,arr[90000],src;
		S(t);
			Graph g(80000);
	        k =9999;i=0;
		while(k>=0)
		{   
	       value=k;n=k;
	       f=4;
	       l=1;
	       int y;
	      // cin>>y;
	       		while(f)
	       		{
	       			m=n%10;
					p= value - m*l;
					arr[i] = p + (m+1)%10*l;
				//	if(se.find(arr[i]) == se.end())
					g.addedge(k,arr[i]);//cout<<arr[i]<<" ";
					//else
				     //cout<<" not inc :"<<arr[i]<<" ";
					i++;
					arr[i]= p+(m+9)%10*l;
		//			if(se.find(arr[i])==se.end())
					g.addedge(k,arr[i]);
					//else
				     //cout<<" not inc "<<arr[i]<<" ";
					i++;
					f--;
					l *= 10;   
					n= n/10;
	       		}
	       	//	cout<<"i "<<i;//<<" i "<<endl;
			
		k--;
		}
		
		while(t--)
		{     se.clear();
			 scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
			 scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3]);
			 m=1;source = 0 ;
			 REP(i,0,4)
			 {
			 	source = source  + a[3-i]*m;
			 	m *=10;
			 }
			 src = source;
			 //cout<<"src is : "<<src<<endl;
			 m=1;target=0;
			 REP(i,0,4)
			 {
			 	target = target  + b[3-i]*m;
			 	m *=10;
			 } 
			 //cout<<source <<" "<<target<<endl;
		
		S(f);
		while(f--)
		{ //	se.clear(); 
		    source = 0 ;m=1;
			 scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
			 REP(i,0,4)
			 {
			 	source = source  + a[3-i]*m;
			 	m *=10;
			 }
			 //cout<<" forb is "<<source<<endl;
			 se.insert(source); 
			 //fr[f]=source;
		}
		//set<int>::iterator it;
		//for(it = se.begin();it!=se.end();it++)
		//cout<<"forbidden "<<*it<<" ";
		//cout<<endl;
		if(se.find(src)!=se.end() || se.find(target)!=se.end())
		{
			cout<<-1<<endl;
			continue;
		}
		
		if(src == target)
		{
			cout<<0<<endl;
			continue;
		}
		
	
		
		g.BFS(src,target);
		
		
		
		}
//cin>>f;
return 0;
}

