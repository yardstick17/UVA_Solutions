#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<climits>
#define pp pair<int,int>
#include<algorithm>
int sum=0;
int n,u[100000],v[100000],e,w[100000],d[100000],s,t,k,l,dc[100000];
		
		int diff[100000],k1;
		bool c[100000];

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
	vector<pp> *adj ;
	public:
		Graph(int V);
		void addedge(int u, int v,int w);
		void dijikstra(int s,int n);
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
void Graph::dijikstra(int s,int n){
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
          // cout<<u<<" "<<v<<" "<<w<<endl;
            if(d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                Q.push(pp(v,d[v]));
            }
        }
    }
   // cout<<" chutiyapa!!";
    for(int i=s+1; i<n; i++) 
	sum = sum+d[i];//printf("Node %d, min weight = %d\n", i+1, d[i]);
	
	
}




int main(){
	
	
	cin>>t;
	
		
		
		
		while(t)
		{ sum =0;
		t--;	
		cin>>n>>k;
		e = n-1;
		Graph g(n);
		for(int i=0;i<e;i++)
		{	cin>>u[i]>>v[i]>>w[i]>>d[i];
			diff[i] = w[i] - d[i];
			dc[i] = w[i] - d[i];
			c[i]=false;
					//g.addedge(u,v,w);
		}
		sort(diff,diff+e);
		l=e-1;
		k1=k;
		
	//	for(int j=0; j<k; j++)
	//	{	
			
			while(k1)	{
			
				for(int i=0; i<e; i++)
	        	{		
					//if(k1==0)
				//	break;
				//	cout<<"brk cvj and l is :"<<l<<endl;
					if((diff[l] == dc[i] ) && (c[i]==false) && (diff[i]>0) )
					{
					//	cout<<" updated onr is  :"<<d[i]<<" from "<<w[i]<<endl;
					    w[i]=d[i];
					    c[i]=true;
					
						l--;
						break;
					//	k1--;
						
					}
					}
					
				k1--;
			   }
			   
		
		
		for(int i=0;i<e;i++)
		{
			g.addedge(u[i]-1,v[i]-1,w[i]);
			//cout<<" weirht is : "<<w[i]<<endl;
		}
		
		for(int i=0;i<n;i++) //cin>>s;
		g.dijikstra(i,n);
		cout<<sum<<endl;
		}
	
		return 0;
		}
		
		
		

