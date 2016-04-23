#include<stdio.h>
int main()
{
	int i,n,j,k,e=0;
	scanf("%d",&n);
	int count[10001]={0};
	int a[10001][3];
	for(i=1;i<n;i++)
		scanf("%d%d",&a[i][1],&a[i][2]);
		
	for(k=1;k<n;k++)
			{	
				for(i=1;i<n;i++)
				for(j=1;j<=2;j++)
						{
			
									if(k==a[i][j])
													{
													count[k]=count[k]+1;}
						}
				if(count[k]<=2)
							{
		 					 	count[k]=count[k]-1;
						
							}
					
					
				if(count[k]>2)
									{
										e=e+1;
										count[k]=2;}
									}
	        
		if(n==2|| n==1)
		printf("%d",n-1);
		else if(n>2&&e==0)
		printf("%d",2);
		else if(n==0)
		printf("%d",0);
		
		else
		{
		
		int s=0;
		for(i=1;i<n;i++)
			s= s+count[i];
			s=s-e+1;
			printf("%d",s);
}
return 0;
	}
