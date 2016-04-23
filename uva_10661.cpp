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
int last_elem_binary(long long int *a,int low,int high,long long int x,long long int n);
int first_elem_binary(long long int *a,int low,int high,long long int x,long long int n);
void fr(long long int *a)
{
register char c=0;
while (c<33) c=getchar();
*a=0;
while (c>33)
{
*a=*a*10+c-'0';
c=getchar();
}
}

int main()
{   	long long int t,n,i,index_low,index_high;
		long long int h;
		long long int a[50002];
		fr(&n); // >>n;
		REP(i,0,n)
			{		fr(&h); //cin>>h;
					a[i]=h;
			}
		fr(&t);//	cin>>t;
			REP(i,0,t)
			{		fr(&h);//cin>>h;
					index_low = first_elem_binary(a,0,n-1,h,n);
					index_high = last_elem_binary(a,0,n-1,h,n);
				if(index_low != -1  )
					{  /*	if(index_low ==0)
						printf("x");
						else   */
						printf("%lld",a[index_low]);//cout<<a[index_low];
					}
						else
							{
					printf("X"); //cout<<"X";
							}
				if(index_high != -1)
					{ 
					
						/*	if(index_high==n-1)
							printf(" x\n");
							else */
						printf(" %lld\n",a[index_high]); //	cout<<" "<<a[index_high]<<endl;
						
					}
					else
						{
								printf(" X\n"); //cout<<" "<<"X"<<endl;
						}
						
					
			
			
			}





return 0;
}
int first_elem_binary(long long int *a,int low,int high,long long int x,long long int n)
	{
			int mid = (low + high)/2;
			if(low<=high)
			{
				if(low==high && a[mid]<x)
				return mid;
				else if(a[mid]>=x)
				return first_elem_binary(a,low,mid-1,x,n);
				else if(a[mid]<x && a[mid+1]>=x)
				return mid;
				else
				return first_elem_binary(a,mid+1,high,x,n);
					
						
			}
			else return -1;	
				
				
				
	}



int last_elem_binary(long long int *a,int low,int high,long long int x,long long int n)
{
	
		int mid = (low + high)/2;
			if(low<=high)
			{
					if(low == high && a[mid]>x)
					{
					//	cout<<"ret 1"<<endl;
					return mid;}
					else if(a[mid]<=x)
					{
					//	cout<<"ret 2"<<endl;
					return last_elem_binary(a,mid+1,high,x,n);}
					else if(a[mid]>x && a[mid-1]<=x)
					{
					//cout<<"return "<<mid<<endl;
					return mid;
					
					}else{
					//cout<<"fgg"<<endl;
					return last_elem_binary(a,low,mid-1,x,n);
					}
			}
			else 
			return -1;
}
