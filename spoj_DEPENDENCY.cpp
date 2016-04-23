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
			bool *visited= new bool[50];

class Graph{
		int V;
		list<int> *adj;
		public:
			Graph(int V);
			void addedge(int u,int v);
			int DFS(int s);
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
	
	int Graph::DFS(int s)
		{	
			
			for(int i=0;i<V;i++)
			 visited[i]=false;
		    
			    list<int> :: iterator k;
			
				for(k=adj[s].begin();k!=adj[s].end();k++)
						{ 	
						         if(!visited[*k])
									{
										visit(*k,visited);
									}
						}
		
		}
	
	
	void Graph:: visit(int s,bool *visited)
	{		
	            list<int> ::iterator m;
				
				 for(m=adj[s].begin();m!=adj[s].end();m++)
					{
							
							if(!visited[*m])
							{
									
								visit(*m,visited);
							}
							
					}
					arr[s]= 1 ;					
					visited[s]=true;
					}
					

int main()
{  	 
    map<char,int>m;
    m['a']=0;
    m['b']=1;
    m['c']=2;
    m['d']=3;
    m['e']=4;
    m['f']=5;
    m['g']=6;
    m['h']=7;
    m['i']=8;
    m['j']=9;
    m['k']=10;
    m['l']=11;
    m['m']=12;
    m['n']=13;
    m['o']=14;
    m['p']=15;
    m['q']=16;
    m['r']=17;
    m['s']=18;
    m['t']=19;
    m['u']=20;
    m['v']=21;
    m['w']=22;
    m['x']=23;
    m['y']=24;
    m['z']=25;
    m['0']=26;
    Graph g(50);
    char node,edge;
    string str;
    int len;
    while(getline(cin,str))
    {
       len = str.length();
       node = str[0];
       
	   for(int i = 2 ; i < len; i = i + 2)//F(i,2,len)
       {
       	edge = str[i];
       	if(1)
       	{
		        g.addedge(m[node],m[edge]);
       	       	cout<<"Edge is "<<node<<" & "<< edge<<"\n";

       	}
       	
       }
    }
	int count = 0 ;
     bool chk;
     F(i,0,26)
     {
     	g.DFS(i);
     	 
     }
	F(i,0,26)
	{
		 cout<<" "<<arr[i]<<" \n";
	}
	 





return 0;
}

