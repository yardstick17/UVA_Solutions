#include<stdio.h>
#include<stdlib.h>
int main()
{
		int t,i,j,k,m;
		long long int x,y,x1,y1,y2;
		scanf("%d",&t);
		for(i=0;i<t;i++)
		{
			m=0;
				scanf("%lld %lld",&x,&y);
			    if(y%2==0)
				{		
					x1= - abs(y);
					for(j=x1;j<=abs(y-1);j++)
					{
							 if(j==x)
							 {
							 printf("YES\n");
							 m=1;
							 break;
							 
							 }
		   			}
		   	   }
			  if(x<0 && x%2==0 && m==0)
					{
						y1=-abs(x);
						for(i=y1;i<=-y1;i++)
						  	{
								if(y1==y)
									{
										 printf("YES\n");
										 m=1;
										break; 
								    }
							}
							
					}
			if(x>0 && x%2!=0 && m==0)
					{
					 y2= -abs(x-1);
					 for(k=y2;k<x+1;k++)
							 {
							 	if(k==y)
					 					{
					 					printf("YES\n");
					 					m=1;
					 					break;
										 }
					 		}
						
								
					}
					if(m==0)
				    printf("NO\n");
					
				}
return 0;		
				
				
}

