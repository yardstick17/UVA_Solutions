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
int f=1;
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
		int dijikstra(int s,int n,int T);
		//void 
};
Graph::Graph(int V){
	this->V = V;
	adj = new vector<pp>[V];
}
void Graph::addedge(int u,int v,int w){
	adj[u].push_back(pp(v,w));
	adj[v].push_back(pp(u,w));
	
}
int Graph::dijikstra(int s,int n,int T){
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
    }	//cout<<"Case #"<<f++<<": ";
		if(d[T]<INT_MAX)
    	printf("Case #%d: %d\n",f++,d[T]); //cout<<"Case #"<<f++<<": "<<d[T]<<endl; //cout<<d[T]<<endl;
    	else
    	printf("Case #%d: unreachable\n",f++);//cout<<"Case #"<<f++<<": unreachable"<<endl;
	
	
}




int main(){
	
	int t;
	int n,u,v,e,w,s,S,T,edge,i;
	int f=1;
	fr(&t);//cin>>t;
	
	while(t--)
	{	
		fr(&n),fr(&e),fr(&S),fr(&T);//cin>>n>>e>>S>>T;
		Graph g(n);
		for( i = 0;i<e;i++)//while(edge--)
		{	
			fr(&u),fr(&v),fr(&w);//scanf("%d%d%d",&u,&v,&w);//cin>>u>>v>>w;
			g.addedge(u,v,w);
		}
		g.dijikstra(S,n,T);
	}
		return 0;
	}
	
	
	
