#include<iostream>
#include<list>
#include<stack>
using namespace std;
			stack<int> Stack;

class Graph{
		int V;
		list<int> *adj;
		public:
			Graph(int V);
			void addedge(int u,int v);
			int DFS();
			void visit(int s,bool *visited);
			
			 
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
	
int Graph::DFS()
		{	
			bool *visited= new bool[V];
			for(int i=0;i<V;i++)
			visited[i]=false;
			list<int> :: iterator k;
				for(int i= 0 ; i < V; i++)//adj[s].begin();k!=adj[s].end();k++)
						{ 	if(!visited[i])
						{
						
							visit(i,visited);
						}
						
						}
			
  }
	void Graph:: visit(int s,bool *visited)
	{	 
	     visited[s]=true;	
		    
	     list<int> ::iterator m;
				for(m=adj[s].begin();m!=adj[s].end();m++)
					{
							if(!visited[*m])
							{
									
								visit(*m,visited);
							}
					}
					
					
					Stack.push(s);
	}
					
					

int main()
{
    // Create a graph given in the above diagram
    
	int x,y,a,b;
	while(1)
	{
		 cin>>x>>y;
		 if(x==0 && y==0)
		 break;
		 
		 
		 Graph g(x);
		 for(int i = 0 ; i < y ; i++)
		{
		  cin>>a>>b;
	      g.addedge(a-1,b-1);
		}
		g.DFS();
		cout <<Stack.top()+1;
		Stack.pop();
		   while (Stack.empty() == false)
			    {
			        cout <<" "<<Stack.top() +1;//  <<" ";
			        Stack.pop();
			    }
			    cout<<"\n";
	}
return 0 ; 
}
/*	Graph g(6);
    g.addedge(5, 2);
    g.addedge(5, 0);
    g.addedge(4, 0);
    g.addedge(4, 1);
    g.addedge(2, 3);
    g.addedge(3, 1);
 
    cout << "Following is a Topological Sort of the given graph \n";
    g.DFS();
 
    return 0;
}
	*/		
			
			
			
			
			
			
			
			
			
			
			
