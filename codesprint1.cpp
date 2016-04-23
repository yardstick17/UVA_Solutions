#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	int t,i,k,l,b[4],a[6];
	cin>>t;
	for(i=0;i<t;i++)
	{
			for(k=0;k<6;k++)
			cin>>a[k];
			b[0]=abs(a[0]-a[2]);
			b[1]=abs(a[0]-a[4]);
			b[2]=abs(a[1]-a[3]);
			b[3]=abs(a[1]-a[5]);
			sort(b,b+4);
			cout<<b[0]<<endl;
				
	}
	return 0;
	
}
