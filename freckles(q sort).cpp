
#include<vector>
#include<math.h>
#include<iomanip>
#include<algorithm>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;
 

struct Edge
{
    int src, dest;
	float weight;
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
    return 100.f*a1->weight - 100.f*b1->weight;
}
/*void bubbleSort(struct Graph* graph,int n)
{
   for (int i = (n); i >= 0; i--)
   {
      for (int j = 1; j = i; j++)
      {
         if (graph->edge[j-1].weight > graph->edge[j].weight)
         {
              struct Edge temp = graph->edge[j-1];
              graph->edge[j-1] = graph->edge[j];
              graph->edge[j] = temp;
   } } } }
 
*/
double KruskalMST(struct Graph* graph) //,long long total)
{	double sum=0;
    int V = graph->V;
    struct Edge result[V];  
    int e = 0;  
    int i = 0;  
 
    
  qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp);
 	//sort(graph->edge[0].weight,graph->edge[V*(V-1)].weight);
  //  bubbleSort(graph,V*(V-1));
    
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
      //  cout<<graph->edge[i].weight<<" "<<endl;
 
        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);
 
        
        if (x != y)
        {
            result[e++] = next_edge;
            Union(subsets, x, y);
        }
        
    }
 
    
    for (i = 0; i < e; ++i)
	sum = sum +  result[i].weight;     // cout<<result[i].src<<"-->"<<result[i].dest<<" = "<<result[i].weight<<endl;
	  // sum = sum +  result[i].weight; 
     // printf("%lf",sum);// cout<<fixed<<setprecision(2)<<sum<<endl;                                
   	//	cout<<endl;
return sum;}
 





int main()
{
		freopen("input.txt","r",stdin);
  	freopen("output.txt","w",stdout);
   int t,i,n,k,j,f;
   float x1,y1,w;
   vector<float>x,y;//double x[10000]={0},y[10000]={0};
   cin>>t;
   while(t--)
   { 
   		x.clear();
   		y.clear();
   	  cin>>n;
   	  k=n;
   	  i=0;
   	  while(k--)
   	  	{		cin>>x1>>y1;
   	  			y.push_back(y1);
   	  			x.push_back(x1); //cin>>x[i]>>y[i];
   	  			
			 
		}
		struct Graph* graph = createGraph(n, n*(n-1));
		f=0;
		
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				{
						if(i!=j)
							{
									w = sqrt(((x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i])));
									graph->edge[f].src=i;
					                graph->edge[f].dest=j;
					                graph->edge[f].weight=w;
									f++;		
																	
									
							}
				}
				double u = KruskalMST(graph);
				//cout<<endl;
			cout<<fixed<<setprecision(2)<<u<<endl;
			if(t!=0)	
			cout<<endl;
			//cout<<endl;
				
   				
   				
   				
   				

   }
   return 0;
}
   
   
   
   
   
  /*int V,E,s,d,w;
  long long total=0;
   while(1)
   { total= 0;
   	cin>>V>>E; 
    if(V==0 && E ==0)
    break;
	struct Graph* graph = createGraph(V, E);
 
 for(int i = 0;i<E;i++)
 {
 	cin>>s>>d>>w;
    graph->edge[i].src = s;
    graph->edge[i].dest = d;
    graph->edge[i].weight = w;
 	total= total + w;
    
}

//cin>>s>>d;
 
    KruskalMST(graph,total);}
 
    return 0;
} */


/*void bubbleSort(struct Graph* graph,int n)
{
   for (int i = (n); i >= 0; i--)
   {
      for (int j = 1; j = i; j++)
      {
         if (graph->edge->weight[j-1] > graph->edge->weight[j])
         {
              struct Edge temp = graph->edge[j-1];
              graph->edge[j-1] = graph->edge[j];
              graph->edge[j] = temp;
   } } } }*/
