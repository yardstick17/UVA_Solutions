#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<stdlib.h>
#include<map>
#include<climits>
//#include<conio.h>
#define pp pair<int,int>
int t,sum = 0;


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
		void dijikstra(int s,int n,int a);
		//void 
};
Graph::Graph(int V){
	this->V = V;
	adj = new vector<pp>[V];
}
void Graph::addedge(int u,int v,int w){
	adj[u].push_back(pp(v,w));
	
	
}
void Graph::dijikstra(int s,int n,int a){
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
            //cout<<u<<" "<<v<<" "<<w<<endl;
            if(d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                Q.push(pp(v,d[v]));
            }
        }
    }
    sum = sum + d[a];
    //cout<<" chutiyapa!!";
   // for(int i=0; i<n; i++) printf("Node %d, min weight = %d\n", i, d[i]);
		//	for(int i=0; i<t; i++)
		//	sum = sum + d[a[i]]; 
		//	cout<<sum<<endl; //cout<<a[i]<<" mic testing"<<endl;
			
}



int main()
{
		int x,y,u,v,n,e,w,i;
		map<string,int>m;
		int a;
		int tc=1;
	
		char s1[100],s2[100],c2,c1;
		while(1)
		{	sum = 0;
			m.clear();
			cin>>n>>t>>e;
			if(n == 0 && t==0 && e == 0)
			break;
			string s[t],src;
			cin>>src;
		Graph g(n);
		for(i=0;i<t;i++)
		cin>>s[i];
		int f=0;
		m[src]=f++;
		for(i=0;i<e;i++)
		{
			scanf(" %s %c-%d-%c %s",s1,&c1,&w,&c2,s2);
			if(m.find(s1)==m.end()){
				
			
			m[s1]=f++;
			
			}
			if(m.find(s2)==m.end())
			{
			
			m[s2]=f++;
		    }
			if(c1=='<')
			g.addedge(m[s2],m[s1],w);
			if(c2=='>')
			g.addedge(m[s1],m[s2],w);
			
			
			
		}
		for(i=0;i<t;i++)
		{
		a=m[s[i]];	
	//	cout<<a<<endl;
		g.dijikstra(m[src],n,a);	
		g.dijikstra(a,n,m[src]);
	}
		cout<<tc++<<". "<<sum<<endl;
	}
	return 0;
//	getch();
	}
	        
	        
	        
	        
	        
	        
	        
	        
	        
	        
	        
	        


