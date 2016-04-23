#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<climits>
#define pp pair<int,int>
void fr(int *a)
{
register char c=0;
while (c<33) c=getchar();
*a=0;
while (c>33)
{
*a=*a*10+c-'0';
c=getchar();
}
}

using namespace std;
class Prioritize
{
public:
    int operator() ( const pair<int, int>& p1, const pair<int, int>& p2 )
    {
        return p1.second < p2.second;
    }
};



class Graph{
	int V;
	vector<pp> *adj;
	public:
		Graph(int V);
		void addedge(int u, int v,int w);
		int dijikstra(int s,int n,int time);
		
};
Graph::Graph(int V){
	this->V = V;
	adj = new vector<pp>[V];
}
void Graph::addedge(int u,int v,int w){
	adj[u].push_back(pp(v,w));
	
}
int Graph::dijikstra(int s,int n,int exit){
	int u,v,w;
	priority_queue<pp, vector<pp > , Prioritize > Q;
	int d[n];
	for(int i=0;i<n;i++)
    {
        d[i] = INT_MAX;
    }
    d[s] = 0;
    Q.push(pp(s,d[s]));
    while(!Q.empty())
    {
        u = Q.top().first;
        Q.pop();
        int size = adj[u].size();
        for(int i = 0 ; i < size ; i++)
        {
            v = adj[u][i].first;
            w = adj[u][i].second;
            if(d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                Q.push(pp(v,d[v]));
            }
        }
    }
   
return d[exit];
}


int main()
{
		int t,n,exit,time,e,u,v,w,i,th,count=0;
		fr(&t);
		while(t--)
		{	count=0;
			fr(&n);
			Graph g(n);
			fr(&exit);
			fr(&time);
			fr(&e);
			
			for(i=0;i<e;i++)
			{
					fr(&u),fr(&v),fr(&w); 
					
					g.addedge(u-1,v-1,w);		
					
					
			}
			
				
				
				
				
				
				for(i=0;i<n;i++)
					{	
						th= g.dijikstra(i,n,exit-1);
						if(th <= time)
						count++;
				
					}
			printf("%d\n",count); 
			if(t!= 0)
			printf("\n");      
			
				


				
				
			
				
				
				
		}
		return 0;
}


