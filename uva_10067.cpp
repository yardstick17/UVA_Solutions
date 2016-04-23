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
  adj[u].push_back(v);
  void Graph::BFS(int s,int target)
  {
  	int count = 0;
	bool *visited = new bool[V];
  	list<int>::iterator k;
	  F(i,0,V)
	  visited[i]=false;
	  list<int>queue;
	  visited[s] = true;
	  queue.push_back(s);
	  while(!queue.empty())
	  {
	  	s = queue.front();
	  	count++;
	  	if(s==target)
	  	cout<<count<<endl;
	  	queue.pop_front();
	  	for(k=adj[s].begin();k!=adj[s].end();k++)
	  	{
	  		if(!visited[*k])
	  		{
	  			visited[*k]=true;
	  			queue.push_back(*k);
	  		}
	  	}
	  }
  	
  }
  

int main()
{  
		int t,f,fr[1000],source,target,a[4],b[4],m,k,i,value,n,l,p,arr[9000];
		S(t);
		set<int>se;
		while(t--)
		{
			 scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
			 scanf("%d%d%d%d",&b[0],&b[1],&b[2],&b[3]);
			m=1;source = 0 ;
			 REP(i,0,4)
			 {
			 	source = source  + a[3-i]*m;
			 	m *=10;
			 }
			 src= source;
			 m=1;target=0;
			 REP(i,0,4)
			 {
			 	target = target  + b[3-i]*m;
			 	m *=10;
			 } 
			 //cout<<source <<" "<<target<<endl;
		
		S(f);
		while(f--)
		{ 		source = 0 ;
			 scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
			 REP(i,0,4)
			 {
			 	source = source  + a[3-i]*m;
			 	m *=10;
			 }
			 se.insert(source); //fr[f]=source;
		}
		Graph g(80000);
		
		
		
		
		
		k =9999;i=0;
		while(k>=0)
		{   
	       value=k;n=k;
	       f=4;
	       l=1;
	       int y;
	       cin>>y;
	       		while(f)
	       		{
	       			m=n%10;
					p= value - m*l;
					arr[i] = p + (m+1)%10*l;
					if(se.find(arr[i])==se.end)
					g.addedge(k,arr[i]);//cout<<arr[i]<<" ";
					i++;
					arr[i]= p +  (m+9)%10*l;
					if(se.find(arr[i])==se.end)
					g.addedge(k,arr[i]);
					cout<<arr[i]<<" ";
					i++;
					f--;
					l *= 10;   
					n= n/10;
	       		}
	       	//	cout<<"i "<<i;//<<" i "<<endl;
			
		k--;
		}
		
		g.BFS(src,target);
		
		
		
		}






return 0;
}

