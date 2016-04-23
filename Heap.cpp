#include<stdio.h>
void addelement(int a[],int ,int );
void heapify(int *a,int ,int );
int main()

{	
		int x,y,z,i,j,a[100];
		scanf("%d",&x);
		for(i=1;i<=x;i++)
		{
				scanf("%d",&y);
				addelement(a,y,i);
				}
		for(i=1;i<=x;i++)		
		printf("%d  ",a[i]);
}
void addelement(int a[],int y,int i)
{       a[i]=y;
		heapify(a,y,i);
		
}
void heapify(int a[],int y,int i)
{ 				int k,j;
	
		if(i==1)
				{
							return;
				}
		else if(y>a[i/2])
		{
				
				while(i!=1&&y>a[i/2])
				{k=a[i/2];
				a[i/2]=y;
				j=i;
				i=i/2;
				a[j]=k;
				
				}

				
				return;
		}
		else
		return;
}
