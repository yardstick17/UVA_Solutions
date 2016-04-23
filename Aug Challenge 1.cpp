#include<stdio.h>
#include<conio.h>
int main()
{
		int t,i,j,n,k,a[100],count;
		scanf("%d",&t);
		for(i=0;i<t;i++)
		{
			scanf("%d %d",&n,&k);
			
			for(j=0;j<n;j++)
			{
					scanf("%d",&a[j]);
			}
			
			count=0;
			 for(j=0;j<n;j++)
			 {
			 		if(a[j]%2==0)
			 		count=count+1;
			 		
			 }
			 if(k==0)
			{ if(count==n)
					printf("NO\n");
					else
					printf("YES\n");
				
				continue;
				}
			 
			 
			 if(count>=k)
			 printf("YES\n");
			 else
			 printf("NO\n");
       } return 0;
       getch();
}
