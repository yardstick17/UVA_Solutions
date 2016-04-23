#include<iostream>
#include<list>
//#include<set>
#include<map>
#include<stdio.h>
using namespace std;
class Graph{
				int V ;
				list<int> *adj;
				public:
				Graph(int V);
				void addedge(int u,int v);
				int DFS(int s,long long ttl);
			};
	Graph:: Graph(int V)
			{
				this->V=V;
				adj = new list<int>[V];
			}
	void Graph::addedge(int u,int v)

			{
					adj[u].push_back(v);
					adj[v].push_back(u);
			}
	int Graph::DFS(int s,long long ttl)
			{  int count=1,flag=1;int d[50]={0};
			bool visited[60] = {false};
			/*	bool *visited= new bool[V];
				for(int i=0;i<V;i++)
				{
					visited[i]=false;
				 
				}*/
				list<int>queue;
				visited[s]=true;
				list<int>::iterator k;
				queue.push_back(s);
				d[s]=0;
				while(!queue.empty())
						{		
						 s=queue.front();
						 queue.pop_front();
						 for(k=adj[s].begin(); k!=adj[s].end();k++)
							{
								if(!visited[*k])
												{
													
													d[*k] = d[s] + 1 ;
													visited[*k]=true;
													queue.push_back(*k);
													if(ttl < d[*k] )
											     	{	flag=0;
														break;
													}
													count++;
													
												}					
							
							}
							if(flag==0)
							break;							
							}  
						
			return count;					
			}
				
		int main()
		{  
		   int n,ans,k,h;
		   long long x,y;
		   int i = 1;
		   map<long long ,int>m;
		    
		   while(1)
		   {  
		   Graph g(60);
		   h=0;
		   m.clear();
		   	 scanf("%d",&n);
		   	 if(n==0)
		   	 break;
		   	 k=n;
		   	 while(k--)
		   	 {
		   	 	scanf("%lld %lld",&x,&y); 
		   	    if(m.find(x)==m.end())
		   	 	m[x]=h++;
		   	 	if(m.find(y)==m.end())
		   	 	m[y]=h++;
				
				g.addedge(m[x],m[y]); 
				
		   	 }
		  
		   	 
		   	 while(1)
		   	 {
		   	 	 scanf("%lld %lld",&x,&y);
		   	 	 if(!x && !y)
		   	 	 break;
					ans = g.DFS(m[x],y);
				//	cout<<m.size()<<endl;
		   	 	 cout<<"Case "<<i<<": "<<m.size() - ans<<" nodes not reachable from node "<<x<<" with TTL = "<<y<<"."<<endl;
		   	 	 i++;
		   	 }
		   	 
		   }
	return 0;
	}
	
	
