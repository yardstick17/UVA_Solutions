#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	
	int a[10000],tot,t,x,c,i;
	cin>>t>>c;
	for(i=0;i<t;i++)
	{
		cin>>a[i];
		a[i]-=1;
		
	} tot= 0;
		sort(a,a+t);
		for(i=0;;i++)
		{	if(t-(i+1)*c<=0)
		      break;
			tot= tot + 2*(a[t-1-i*c]) ;
		  
	//	cout<<tot<<endl;
		}
	//	cout<<tot<<endl;
		if(t-(i+1)*c<=0)
		tot = tot + 2*(a[t-1 - i*c]);
		cout<<tot<<endl;
	
return 0;
}
