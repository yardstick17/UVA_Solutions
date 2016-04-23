#include<iostream>
#include<math.h>
#include<iomanip>
#define PI 3.14159265
using namespace std;
int main()
{   

		int t,n,i,j,k;
	    double r,R;
		
		cin>>k;
		for(i=0;i<k;i++)
		{
			cin>>R>>n;
			r= (R*sin(PI/n))/(1 + sin(PI/n));
			cout<<"Scenario #"<<i+1<<":"<<endl;
			cout<<setprecision(3)<<fixed<<r<<endl;
			cout<<endl;
			
			
			
		}
	return 0;
	
}
