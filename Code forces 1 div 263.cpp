#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k,l,flag=0;
	char a[n][n];
	
	int count = 0;
	for(i=0;i<n;i++)
	{
		
					
				scanf("%s",&a[i]);
			
		
	
	}

for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
		{	count=0;
			if(a[i+1][j]=='o')
			count++;
			if(a[i-1][j]=='o')
			count++;
			if(a[i][j+1]=='o')
			count++;
			if(a[i][j-1]=='o')
			count++;
			//printf("%d",count);
			
			if(count%2!=0)
			{
			flag++;
			printf("%d",flag);
			
			}
			}}	
			if(flag%2==0 || count%2!=0)
			printf("NO");
			else
			printf("YES");
			return 0;
	
}

