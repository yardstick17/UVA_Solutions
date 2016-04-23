			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<math.h>
#include<limits.h>
#include<iomanip>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
//#define (x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
//#define V 5
int V;
//int graph2[200000][200000];
double sum;
int min(double key[],bool mst[]);
/*{   int mini=INT_MAX,min_index;
	F(i,0,V)
	if(mini>key[i]&&mst[i]==false)
	mini = key[i],min_index=i;
	return min_index;
		
} */
int printmst(int parent[],double graph[110][110]);
/*{     cout<<" MST is:\n";
	  for (int i = 1; i < V; i++)
      printf("%d --> %d  ==  %d \n", parent[i], i, graph[i][parent[i]]);
}*/
	
	
int PRIMST(double graph[110][110])
{
	int parent[V];
	double key[V];
	bool mst[V];
	F(i,0,V)
	{
		key[i]=INT_MAX;
		mst[i]=false;
	}	
	key[0]=0;
	parent[0]= -1;
	F(i,0,V)
	{
	  int u = min(key,mst);
	  mst[u]=true;
	    F(i,0,V)
	    {
	    	if(graph[u][i] && mst[i]==false && key[i]>graph[u][i])
	    	key[i]=graph[u][i],parent[i]=u;
	    }
	    
			
			
	}
	printmst(parent,graph);

   }

int main()
{	int i,j;
	int t;
	double x[20009],y[20009],w;
	cin>>t;
	scanf("\n");
//	cout<<endl;
	
double graph[110][110];
  //  int arr[5] = (int *)malloc(6 * sizeof(int));
//	double graph[200000]= (double *)malloc(200000 * (sizeof(double)));
	while(t--)
	{ 	sum = 0;
	
		cin>>V;
		i=0;
		int f=V;
		while(f--)
		{	cin>>x[i]>>y[i];
			i++;
		}
			for(i=0;i<V;i++)
				for(j=0;j<V;j++)
					{
						if(i!=j)
						{
																//cin>>x[i][j]>>y[i][j];
							w= sqrt(((x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i])));
							graph[i][j]=w;
						}
					}
	PRIMST(graph);
	}




return 0;
}


int min(double key[],bool mst[])
{   double mini=INT_MAX,min_index;
	F(i,0,V)
	if(mini>key[i]&&mst[i]==false)
	mini = key[i],min_index=i;
	return min_index;
		
}
int printmst(int parent[],double graph[][110])
{     //cout<<" MST is:\n";
	  for (int i = 1; i < V; i++)
      sum = sum + graph[i][parent[i]]; 
	  cout<<setprecision(2)<<fixed<<sum<<endl;
	  cout<<endl;//printf("%d --> %d  ==  %f \n", parent[i], i, graph[i][parent[i]]);
}
