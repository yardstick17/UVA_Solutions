#include<stdio.h>
int main()
{
		int n,m,k;
		scanf("%d %d",&n,&m);
		int i =1,count=0;
		if(n<m)
		printf("%d",n);
		else {
		while(n-i*m +i >= m)
		{	 	
				count++;
			    i++;
			  //  printf("%d %d",count, i);
			 
		}
		k=n-(i-1)*m +i;
			count= count*m + k ;
			printf("%d",count);
	}
			return 0; 
}
