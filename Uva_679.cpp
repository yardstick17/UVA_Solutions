			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<math.h>
#include<algorithm>
#include<map>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
void binary_search(int* a,int *b,int low,int high,int c);

int main()
{   int t,x,y,i,j,k,d,n,u,eff_drop;
		S(t);
		int a[10000],b[10000];
		while(t)
		{
				cin>>d>>n;
				u = (int)pow(2,d);
			   for(i=0;i<u;i++)   //	F(i,1,u)
				{
					a[i]=i;
				}
				eff_drop = n % (u/2);//(int)pow(2,d-1);
				binary_search(a,b,1,u,1);
			for(int i=1;i<10;i++) //F(i,0,5)
				cout<<b[i]<<" ";
			//	for(i=0;i<5;i++) //F(i,0,5)
			//	cout<<b[i];
				
				
		}
return 0;
}
 void binary_search(int* a,int *b,int low,int high,int c)
 {
 	//	int b[1000];
		int mid = (low + high)/2;
 		if(high>low)
 		{ b[c] = a[mid];
 		//	cout<<a[mid]<<" and b[] is "<<b[c]<<" checking a[]"<<endl;
		  c++;
		  if(c%2== 0 )
		  {
		  	return binary_search(a,b,mid+1,high,c);
		  }	
		  else	
		  return binary_search(a,b,low,mid-1,c);
		}
		
		  
				
		return;
 				
 				
 		}
 
