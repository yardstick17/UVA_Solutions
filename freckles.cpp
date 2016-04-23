			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<iomanip>
#include<map>
#include <string.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
#include<set>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
float total=0;
struct EDGE
{
	double source,dest,weight;
};
struct GRAPH
{
	int V,E;
	struct EDGE *edge;
};
struct GRAPH *createGraph(int V,int E)
{
		struct GRAPH *graph=(struct GRAPH* )malloc(sizeof(struct GRAPH));
		graph->V=V;
		graph->E=E;
		graph->edge=(struct EDGE* )malloc(graph->E*(sizeof(struct EDGE)));
		return graph;
			
			
};
struct subset
{
	int parent,rank;
};
int find(struct subset *subsets,int i)
{
	if(subsets[i].parent != i)
	{ find(subsets,subsets[i].parent);
	}
	return subsets[i].parent;
}
void Union(struct subset *subsets,int x,int y)
{	x = find(subsets,x);
	y = find(subsets,y);
	if(subsets[x].rank > subsets[y].rank)
	subsets[y].parent = x;
	else if(subsets[x].rank<subsets[y].rank)
	subsets[x].parent = y;
	else
	{
	
	subsets[y].parent= x;
	subsets[x].rank++;
	}
}
int myComp(const void* a, const void* b)
{
    struct EDGE* a1 = (struct EDGE*)a;
    struct EDGE* b1 = (struct EDGE*)b;
    return a1->weight > b1->weight;
}
 
void KRUSKALMST(struct GRAPH *graph)
{	int i,e;
	int V=graph->V;
										//	int E= graph->E;
     struct EDGE result[V];
	 qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp);					//	sort(graph->edge->weight,graph->edge->weight + graph->E);
	 	struct subset *subsets=(struct subset*)malloc(V*sizeof(struct subset));			//[V];
	 	for(i=0;i<V;i++)
	 	{
	 		subsets[i].parent=i;
	 		subsets[i].rank=0;
	 	}
	 	e=0;
	 	i=0;
	 	while(e<V-1)
	 	{
	 		struct EDGE n_edge=graph->edge[i++];
	 		int x= find(subsets,n_edge.source);
	 		int y = find(subsets,n_edge.dest);
	 		if(x!=y)
			 {
			 	result[e++]=n_edge;
			 	Union(subsets,x,y);
			 
			 
			 //return 1;
			 }
		}
		for(i=0;i<V-1;i++)
		{
		total = total + result[i].weight;
		//cout<<total<<endl;//	cout<<result[i].source<<"-->"<<result[i].dest<<"== "<<result[i].weight<<endl;
		}
	}



int main()
{   
		int t,V,E,i,s,d,n,count=0;
		//cin>>V>>E;
		//i=0,t;
		int f=0;
		float x[100],y[100],w;
		//struct GRAPH* graph = createGraph(V,E);
	/*	cout<<"Enter SOURCE and DESTINATION and WEIGHT(0 0 0 to end entries):"<<endl;
		while(1)
		{	
			cin>>s>>d>>w;
			graph->edge[i].source=s;
			graph->edge[i].dest=d;
			graph->edge[i].weight=w;
			if(s==0&&d==0&&w==0)
			break;
			i++;
		}*/
		cin>>t;
		printf("\n");
		
		while(t--)
		{   total=0;
			f=0;
			i=0;
			
			
			cin>>n;
			//n=d;
			d=n;
			//cout<<d;
			struct GRAPH* graph = createGraph(n,n * (n-1));
			while(n--)
			{//cout<<n<<" n is:"<<endl;
			cin>>x[i]>>y[i];
			i++;
			}
			//printf("\n");
		//	cout<<i<<" ha ah ah "<<endl;
		
		F(i,0,d)
		{	//	cout<<i<<" ha ah ah "<<endl;
				F(j,0,d)
				{
					//	if(i!=j)
						{  //cout<<i<<" : "<<j<<endl;
							w= sqrt(((x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i])));
								//	cout<<w<<endl;
							cout<<"Distance b/w "<<i<<" and "<<j<<" is :"<<w<<endl;
							graph->edge[f].source=i;
			                graph->edge[f].dest=j;
			                graph->edge[f].weight=w;
			                count++;
						f++;
						}
				}
		}//cout<<"Count is: "<<count<<endl;
		KRUSKALMST(graph);
		cout<<fixed<<setprecision(2)<<total<<endl;
	


}
	return 0;
}

