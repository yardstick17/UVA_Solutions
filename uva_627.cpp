			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<stdlib.h>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

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
			{
				bool *visited= new bool[V];
				for(int i=0;i<V;i++)
				{
					visited[i]=false;
				 
				}
				list<int>queue;
				visited[s]=true;
				list<int>::iterator k;
				queue.push_back(s);
				while(!queue.empty())
						{		
						 s=queue.front();
						 cout<<s<< " ";
						 queue.pop_front();
						 for(k=adj[s].begin(); k!=adj[s].end();k++)
							{
								if(!visited[*k])
												{
													visited[*k]=true;
													queue.push_back(*k);
												}												}								
							}
						
								
			}

int main()
{
	int t,i,r,x,j,k,l,a[100],p,src;
	int dest[100];
	//vector<int>v;
	//char s[1000];
	string s;
	while(scanf("%d\n",&t)!=EOF)
	{		 Graph g(t);
			while(t--)
				{			
					//while(1)
						cin>>s;//gets(s);
						//if(s.length()==0)
						//break;
							i=0;
							while(s[i]!='-')
								{ a[i]=s[i]-'0';
								i++; //x =x + 
						
								}
							//	cout<<a[0]<<" ha "<<endl;
								//i--;
								p=1;
								src=0;
								cout<<"a[i]: "<<a[i-1]<<endl;
							for(k=i-1;k>=0;k--)
							{	src =src + a[k]*p;
								p= p*10;
								
							}
							 cout<<" check: "<<src<<endl;	
							j=0;
								while(s[i]!='\0')
								{ 	i++;
									l=i;
									while(s[i]!=','&& s[i]!='\0')
									{
								
											a[i]=s[i]-'0';
											i++; 
									}
									p=1;
									dest[j]=0;
									for(k=i-1;k>=l;k--)
													{	dest[j] =dest[j] + a[i]*p;
														p= p*10;
														
													}
								}
						for(i=0;i<2;i++)
						{
							 cout<<dest[i]<<endl;
						}
							}
															
								


	}
return 0;
}

