			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
class Graph
{
	int c,coun=0;
	int v;
	list<int> *adj;
	int visit(int ,bool*);
public:
		set<int>se,s1,s2;
	Graph(int v);
	void addedge(int u,int v);
	int DFS(int s);

};
Graph::Graph(int v){

	this->v= v;
	adj= new list<int>[v];
}
void Graph::addedge(int v,int w)
{ 
	adj[v].push_back(w);
}
int Graph::visit(int s,bool *visited)
{
//	if(visited[s]=true)
//	coun++;
	//cout<<" graph traversal is: "<<endl;
//	cout<<" "<<s+1<<" ";
	list<int>::iterator it=adj[s].begin();
	for(;it!=adj[s].end();it++)
	{
		if(visited[*it]==false)
		{ visited[*it]=true;
			se.insert(*it);
		coun++;
		visit(*it,visited);
	}
	}
	return coun;
}
int Graph::DFS(int s)
{   se.clear();
//	s1.clear();
	s2.clear();
	coun=0;
	int i;
	bool *visited= new bool[v];
	for(i=0;i<v;i++)
	visited[i]=false;
	
	c=visit(s,visited);
	return c;
}

int main()
{	
	int v,t,x,y,z,i,j,k,m,a[1000];
	while(1){
	S(v);
	if(v==0)
	break;
    Graph g(v);
    set<int>::iterator it;//= g.se.begin();
    for(i=0;i<v;i++)
    g.s1.insert(i);
	while(1)
	{
			z=0;
			cin>>x;
			
		
		if(x==0)
		break;
		else
		{   //g.s1.insert(x-1);
			while(1)
			{	
				cin>>y;
				
				if(y==0)
				break;
				else
				{
			//	g.s1.insert(y-1);
				g.addedge(x-1,y-1);
		        }
				
			}
		}
	}//cout<<" Graph si: ";
	//for(it=g.s1.begin();it!=g.s1.end();it++)
	//cout<<*it<<" ";
	//cout<<endl;
	S(t);
	REP(i,0,t)
	{	cin>>x;
		a[i]=x;
	}
	REP(i,0,t)
	{   //cout<<"\n";
		m=g.DFS(a[i]-1);
		for(it=g.s1.begin();it!=g.s1.end();it++)
		{ 
			if(g.se.find(*it)==g.se.end())
			g.s2.insert(*it);
		}
		m=v-m;
			cout<<m;
			for(it=g.s2.begin();it!=g.s2.end();it++)
			cout<<" "<<*it+1;
			cout<<endl;
		//cout<<" Ans is: "<<m<<endl;
	}
	
	
	
	
	}



return 0;
}

