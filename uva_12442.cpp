#include<iostream>
#include<list>
using namespace std;
class Graph{
		int V;
		list<int> *adj;
		public:
			Graph(int V);
			void addedge(int u,int v);
			int DFS(int s);
			void visit(int s,bool *visited,long count);
			 
};
	Graph::Graph(int V)
			{
				this->V=V;
				adj= new list<int>[V];
			}
	void Graph::addedge(int u,int v)
		{
			adj[u].push_back(v);	
		}
	
	int Graph::DFS(int s)
		{	long count=0;
			bool *visited= new bool[V];
			for(int i=0;i<V;i++)
			visited[i]=false;
			
			list<int> :: iterator k;
				for(k=adj[s].begin();k!=adj[s].end();k++)
						{ 	if(!visited[*k])
						{
							count++;
							visit(*k,visited,count);
						}
						}
		return count;
		}
	void Graph:: visit(int s,bool *visited,long count)
	{	
	cout<<" count is: "<<count<<endl;
		list<int> ::iterator m;
				for(m=adj[s].begin();m!=adj[s].end();m++)
					{
							if(!visited[*m])
							{
									
								visit(*m,visited,count);
							}
					}
					
					cout<<s<<" ";
					visited[s]=true;
					}
					
					
	int main()
	{long count;
		Graph g(9);
			g.addedge(0,1);
		 	g.addedge(0,3);
		 	g.addedge(1,2);
		 	g.addedge(1,4);
		 	g.addedge(3,4);
		 	g.addedge(3,6);
		 	g.addedge(4,2);
		 	g.addedge(4,5);
		 	g.addedge(4,7);
		 	//g.addedge(5,0);
		 	g.addedge(6,7);
		 	g.addedge(7,5);
		 	g.addedge(7,8);
		 	
		 count=	g.DFS(0);	
		 	cout<<" Ans is: "<<count<<endl;}		
		
			
			
			
			
			
			
			
			
			
			
			
			
			
			
