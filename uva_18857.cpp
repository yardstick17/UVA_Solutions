#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
#include<set>
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
{	//long long sum=0;
    int min = 0;
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
 
   
    while (e < V -1)//V - 1)
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
 
    
    for (i = 0; i < graph->V -1; ++i)
    { if(min < result[i].weight)
    	min = result[i].weight;
    		s.insert(result[i].src);
    		s.insert(result[i].dest);
        
    }
   if(s.size()>=V)
   cout<<min<<endl;
	else
	cout<<"IMPOSSIBLE"<<endl;
}
 





int main()
{
   
  int t,V,E,min,s,d,w,f;
  set<int>se;
   while(1)
   {    // min = 0 ;
   
   		
		    se.clear();
		    
			cin>>V>>E;
		    f=0;
		  		   	if(V==0 && E==0)
		  		 	break;
		  		 	else if(E<V-1)
		  		 	{	t= E;
							  		 	while(t)
											    {		t--;
											    		cin>>s>>d>>w;
											    		
											    }
							  		 		
		  		 		cout<<"IMPOSSIBLE"<<endl;
		  		 		continue;
		  		 	}
			  struct Graph* graph = createGraph(V,E);

			t=E;
			
			
		    while(t)
		    {		t--;
		    		cin>>s>>d>>w;
		    		
		    		 graph->edge[f].src = s;
					 graph->edge[f].dest = d;
					 graph->edge[f].weight = w;
					 f++;
					 se.insert(s);
					 se.insert(d);
					 
		    }
		    
		if(se.size()<V)
		{
		
			cout<<"IMPOSSIBLE"<<endl;
		    continue;}KruskalMST(graph);
		    	    
		}
		    return 0;
    
    
    
    
    
    
    
    

} 
