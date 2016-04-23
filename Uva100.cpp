#include<iostream>
#include<algorithm>
#include<vector>
//#include<new>
#include<stdio.h>
using namespace std;
int main()
{
		long long x,y,h,k,j,i,a;
		vector<int> v;
		while(scanf("%lld%lld",&x,&y)!= EOF)
		{      int a=0; i=x;
				if(x>y)
				{			a=1;
							x=y;
							y=i;}
				h=x;
				
				j=x;
				while(j<=y)
				{
						k=1;
						while(x!=1)
						{
							if(x%2==0)
							x/=2;
							else
							x= 3*x + 1;
							k++;
						}// cout<<k<<" ";
						v.push_back(k);
			             j++;
			             x=j;
				 }
				 sort(v.begin(),v.end(),greater<int>());
				 if(a==0)
				 cout<<h<<" "<<y<<" "<<*v.begin()<<endl;
				 else
				 cout<<y<<" "<<h<<" "<<*v.begin()<<endl;
				 v.clear();
				 
				 
		}return 0;
		
}
