#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
#include<set>
#include<math.h>
using namespace std;
 int city[10]={0};
struct Edge
{
    int src, dest;
	double weight;
};
 
struct Graph
{
    int V, E;
 
    struct Edge* edge;
};
 
struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = (struct Graph*) malloc( sizeof(struct Graph) );
    graph->V = V;
    graph->E = E;
 
    graph->edge = (struct Edge*) malloc( graph->E * sizeof( struct Edge ) );
 
    return graph;
}
 
struct subset
{
    int parent;
    int rank;
};
 
int find(struct subset subsets[], int i)
{
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
 
    return subsets[i].parent;
}
 
void Union(struct subset subsets[], int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
 
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
 
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}
 
int myComp(const void* a, const void* b)
{
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->weight > b1->weight;
}
int KruskalMST(struct Graph* graph)
{	int min=0;
	set<int>s;
    int V = graph->V;
    struct Edge result[V];  
    int e = 0;  
    int i = 0;  
    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp);
 
    struct subset *subsets =
        (struct subset*) malloc( V * sizeof(struct subset) );
 
    for (int v = 0; v < V; ++v)
    {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
 
    while (e < V - 1)
    {
        struct Edge next_edge = graph->edge[i++];
 
        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);
 
        if (x != y)
        {
            result[e++] = next_edge;
            Union(subsets, x, y);
        }
    }
 
   // printf("Following are the edges in the constructed MST\n");
    for (i = 0; i < e; ++i)
        {
        	if(result[i].weight > min)
			min = result[i].weight;	//printf("%d -- %d == %d\n", result[i].src, result[i].dest,result[i].weight);
        	s.insert(result[i].src);
			s.insert(result[i].dest);
		}
		if(V==s.size())
		{
			cout<<min<<endl;
		}
		else
		cout<<"IMPOSSIBLE"<<endl;
	//	int city[]={s.size(),min};
	//	city[0]=s.size();
	//	city[1]=min;	
    //return city;
}
 



int main()
{
    int t,V,E,min,s,d,w,f;
   while(1)
   {
   
   		//	min = 0;
		    cin>>V>>E;
		  		   	if(V==0 && E==0)
		  		 	break;
		  		 	else if(E==0)
		  		 	{
		  		 		cout<<"IMPOSSIBLE"<<endl;
		  		 		continue;
		  		 	}
			  struct Graph* graph = createGraph(V,E);

			t=E;
			f=0;
			//count=0;
		    while(t)
		    {		t--;
		    		cin>>s>>d>>w;
		    		if(w>min)
		    		min = w;
		    		 graph->edge[f].src = s;
					 graph->edge[f].dest = d;
					 graph->edge[f].weight = w;
					 f++;
		    		//count++;
		    }
		 // int city[10];
		    KruskalMST(graph);
		    	    
		}
		    
    
    
    
    
    
    
    
    
}
    
    
    
    
    
    
 /*   
 /*  int V,E,s,d,t,n,f,k,v,u,i,j;
  double x[1000],y[1000],w;
  i=0;
  
  cin>>t;
  while(t) 
  {	i=0;
  		cin>>n;
  		k=n;
  		while(k--)
		  { 
		  cin>>x[i]>>y[i];
			i++;
			}
    struct Graph* graph = createGraph(n, n*(n-1));
 			f=0;
			 for(u=0;u<n;u++)
			 { 
			 	for( v=0;v<n;v++)
					{	if(u!=v)
						{
							w = sqrt(((x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i])));
    				    graph->edge[f].src = u;
					    graph->edge[f].dest = v;
					    graph->edge[f].weight = w;
					    f++;
						}
					}
				}
 
    KruskalMST(graph);}
 
    return 0;
    */

