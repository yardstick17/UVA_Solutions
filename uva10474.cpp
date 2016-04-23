			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<algorithm>
#include<map>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
int search(int,int,int,int *);
int main()
{
	int n,q,i,x,index,mid,w;
	w=1;
	while(1)
	{
	//	scanf("%d %d",&n,&q);
     	cin>>n>>q;	
		if(n==0 && q==0)
			break;
		int a[n],b[q];
		//	printf("CASE# %d:\n",w);
		//	w++;
		REP(i,0,n)
		{
				S(x);
				a[i]=x;
		}
		sort(a,a+n);
		F(j,0,q)
		{//	printf("CASE# ",j);
			S(x);
		b[j]=x;	//cout<<"great chutiyapa"<<endl;
		//	index = search(x,0,n-1,a);
			//if(index==-1)
			//cout<<x<<"not found"<<endl;
			//else
			//cout<<x<<" found at "<<index+1<<endl;
		}
		printf("CASE# %d:\n",w);
			w++;
			F(j,0,q)
			{
				x=b[j];
				index = search(x,0,n-1,a);
				//printf("CASE# %d:\n",j+1);
				if(index==-1)
				cout<<x<<" not found"<<endl;
				else
				cout<<x<<" found at "<<index+1<<endl;
				
			}



	}
return 0;
}


int search(int x,int low,int high,int *a)
{	int mid;
	mid= (low + high)/2;
//	cout<<"chutiyapa"<<endl;
	if(high>=low)
{
	if(mid==0 && a[mid]==x || a[mid]==x && a[mid-1]<x)
     	return mid;
	if(a[mid]>=x)
     	return search(x,low,mid-1,a);
	if(a[mid]<x)
    	return search(x,mid+1,high,a);
}
else return -1;
}

