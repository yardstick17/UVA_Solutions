#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
		int t,i,a[100]={0},count=0,j,f;
		cin>>t;
		for(i=0;i<t;i++)
		{	count = 0;
			cin>>f;
			for(j=0;j<f;j++)
			{
			cin>>a[j];
				
		}
		int s=0;
		for(j=0;j<f;j++)
		{	
			s= s+ a[j];
		
		}
		
		for(j=0;j<f;j++)
		{
				if(a[j]>s/f)
				count++;
				
		}
		
		cout<<count<<endl;
		}
	return 0;
	}


