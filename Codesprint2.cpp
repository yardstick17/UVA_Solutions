#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
		int t,i,j,k,count,flag;string w,b;
		
		cin>>t;
		for(i=0;i<t;i++)
		{  count=0;
			cin>>b;
			cin>>w;
			for(k=0;k<b.length();k++)
			{   flag=0;
				for(j=0;j<w.length();j++)
				{
					if(b[k]==w[j] && flag == 0)
					{
					count++;
				
					flag++;
					}
				
				
				}
					
			}
			
		cout<<count<<endl;	}
		return 0;
	}
