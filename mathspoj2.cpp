#include<iostream>
#include<math.h>
using namespace std;
int main()
{
		int t,i,j,k,l,count;
		cin>>t;
		for(i=0;i<t;i++)
		{
			cin>>k;
			count = 0;
			for(j=5;k/j>=1;j*=5)
			{
				count=count + k/j;
			}
		 cout<<count<<endl;
		 }
		 return 0;
}
