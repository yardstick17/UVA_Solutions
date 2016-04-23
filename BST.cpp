#include<stdio.h>
void addelement(int a[],int );
int main()
{			
		int y,i,n=8;
			
			int a[100] = {0};
			for(i=1;i<=n/2;i++)
			{
			scanf("%d",&y);
			addelement(a,y);
			}
			for(i=1;i<=n;i++)
			printf(" list is %d \n",a[i]);
			return 0;
		}
			
			void addelement(int *a,int y)
			{	
					int i=1;
					if(a[0]==0)
						{
						a[1]=y;
						a[0]=1;
						return;
						}
						else
							a[0]=a[0]+1;
			while(i<=a[0])
				{
				if(y<a[i])
				i=2*1;
			else 
			i=2*i+1;
			 	
			 	}
			a[i]=y;}
