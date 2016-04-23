#include<iostream>
using namespace std;
int main()
{
	 int x,y,z;
	 cin>>x>>y;
	 int r=1;
	 while(r)
	 {
	 	r= x%y;
		x=y;
		y=r; 	
	 }
	 cout<<x;
	 return 0;
	 
}
