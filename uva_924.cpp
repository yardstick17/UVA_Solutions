#include<iostream>
#include<list>
#include<stdio.h>
#include<map>
#include<algorithm>
using namespace std;
class Graph{
				int V ;
				list<int> *adj;
				public:
				Graph(int V);
				void addedge(int u,int v);
				void DFS(int s);
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
	void Graph::DFS(int s)
			{   //map<int,int>map_layer;
				bool *visited= new bool[V];
			int d[10000],layer[2550]={0};//flag = 0,n;
				for(int i=0;i<V;i++)
				{
					visited[i]=false;
				 
				}
				list<int>queue;
				visited[s]=true;
				list<int>::iterator k;
				queue.push_back(s);
				d[s]=0;
				int max=0,day=0;
				while(!queue.empty())
						{	//count=0;
					        s=queue.front();
						    queue.pop_front();
				     		 for(k=adj[s].begin(); k!=adj[s].end();k++)
							{
								if(!visited[*k])
												{    
													visited[*k]=true;
													queue.push_back(*k);
													d[*k] = d[s] + 1 ;
											    //  	map_layer[d[*k]]++; 
													layer[d[*k]]++;
													if(max<layer[d[*k]])
													{
														day = d[*k];
														max = layer[d[*k]];
													}
													
													//count++;
												/*	if(max < count)
													{
														max = count;
														day = d[*k];
														flag = 1;*/
													
													
												}											
							
							} 
						//	if(max<count)
						//	{
							
						//	max = count;
												
							}  
	//	sort(layer,layer + 100);
		
	//	cout<<" layer is :"<<layer[99]<<endl;
			//cout<<map_layer.rbegin()->second<<endl;
		if(max==0 && layer[day]==0)
		cout<<0<<endl;
		else
		cout<<layer[day]<<" "<<day<<endl;				
			}
		//	if(!flag==0)
		//	cout<<max<<" "<<day<<endl;
		//	else
		//	cout<<0<<endl;}
		//	else
		//	cout<<0<<endl;}
				
		int main()
		{  
		
			int t,i,j,k,x,y,s;
			scanf("%d",&t);
			Graph g(3000);
			i=0;
			while(t--)
			{   // i=0;
				 scanf("%d",&x);
				 while(x--)
				 { scanf("%d",&y);
				 	g.addedge(i,y);
				 	
				 	
				 }
				 i++;
				 
			}
			scanf("%d",&t);
			while(t--)
			{
				 scanf("%d",&s);
				 g.DFS(s);
			}
		//	cin>>x;
		
		return 0;
	}
		
			
		
		
		
		
		
		
	
