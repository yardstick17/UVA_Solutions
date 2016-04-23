#include<iostream>
#include<set>
#include<stdio.h>
using namespace std;
int main()
{
		int x,y,p,i,j;
		long d;
		set<int>s;
		while(1)
		{	s.clear();
			scanf("%d%d",&x,&y);
			if(x==0 && y==0)
			break;
			for(i=0;i<x;i++)
			{
				scanf("%ld",&d);
				s.insert(d);
				
			}
				for(i=0;i<y;i++)
			{
					scanf("%ld",&d);
				s.insert(d);
				
			}
			//int p=s.size();
			cout<<(x+y)-s.size()<<endl;
			
			//diff=(x+y)-s.size();
			
			
			
		}
		return 0;
}
