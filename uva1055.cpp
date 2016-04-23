#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
	{	
		 long int x,y;
		while(scanf("%ld%ld",&x,&y)!=EOF)
		{
			printf("%ld\n",abs(y-x));
		
		}
		return 0;
	}
