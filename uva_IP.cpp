
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
#include<map>
using namespace std;
 

struct Edge
{
    int src, dest;
	int weight;
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
 

void KruskalMST(struct Graph* graph)
{	long long sum=0;
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
 
    
    for (i = 0; i < e; ++i)
       sum = sum +  result[i].weight; 
       cout<<sum<<endl;                                
   
}
 int main()
 {		map<string,int>m;
 		int t,V,E,j,i,cost,n;
 		cin>>t;
 		while(t--)
		 {	m.clear();
		    cin>>V;
			cin>>E;
			j=E;
			char s1[10],s2[10];
			i=0;
			n=0;
			struct Graph* graph = createGraph(V, E);
				while(j--)
					{ 
						scanf("%s",s1);
						scanf("%s",s2);					
						
						scanf("%d",&cost);
						
					if(m.find(s1)== m.end())
					{
						m[s1]= i;
						i++;
						
					}
						if(m.find(s2)== m.end())
					{
						m[s2]= i;
						i++;
						
					}
					
					
						graph->edge[n].src = m[s1];
					    graph->edge[n].dest = m[s2];
					    graph->edge[n].weight = cost;
					    n++;
										
					}
 		KruskalMST(graph);
 			if(t!=0)
 			printf("\n");
 }
return 0;
}




