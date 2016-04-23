			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<string.h>
#include<queue>
#include<stdlib.h>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
#include<cstdio>
#define gc getchar_unlocked
#include<iostream>
#include<cstdio>
#define gc getchar_unlocked
int interaction,n;

 
 class Graph{
				int V ;
				list<int> *adj;
				public:
				Graph(int V);
				void addedge(int u,int v);
				bool BFS();
			};
	Graph:: Graph(int V)
			{
				this->V=V;
				adj = new list<int>[V];
			}
	void Graph::addedge(int u,int v)
            {
					adj[u].push_back(v);
			}
	bool Graph::BFS()
			{   
				int colour[V],s;
			    memset(colour,-1,sizeof(colour));
				F(i,0,n)
				{
				
					list<int>queue;
					if(colour[i]== 0 || colour[i]== 1 )
					continue;
					
				colour[i] = 0 ; 
				list<int>::iterator k;
				queue.push_back(i);
				
				while(!queue.empty())
						{		
						 s=queue.front();
						 queue.pop_front();
						 for(k=adj[s].begin(); k!=adj[s].end();k++)
							{
								if(colour[*k]== -1 )
												{
													colour[*k]= 1 - colour[s]; //visited[*k]=true;
													queue.push_back(*k);
												}
												else if(colour[*k]==colour[s])
												{
													 return false;
												}												
							}								
							
							}
						}
							return true;  
		}

int main()
{
   int t,interactipon,u,v,cs = 1 ;
   S(t);

   while(t--)
    {
    	 S(n); S(interaction);
		 //scanint(n);
		// scanint(interaction);
		//scanf("%d%d",&n,&interaction);
		 Graph g(n);

    	 F(i,0,interaction)
    	   {
    	   	
    	   	  scanf("%d%d",&u,&v);
    	   	  g.addedge(u-1,v-1);
    	   	  g.addedge(v-1,u-1);
    	   	  
    	   	  
    	   }
    	   
    	   bool ans = g.BFS();
    	  
		   if(ans)
    	    {
    	       cout<<"Scenario #"<<cs<<":\n";
    	       cs++;
    	       cout<<"No suspicious bugs found!\n";
    	    }
		   else
    	    {
    	      cout<<"Scenario #"<<cs<<":\n";
    	       cs++;
    	       cout<<"Suspicious bugs found!\n";
            }
    	 
    }


return 0;
}

