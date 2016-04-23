#include<iostream>
//#include<math.h>
using namespace std;
int main()
	{
			int x,y,z;
			cout<<"Calculating Power of Number: (a^b) \n"<<endl;
			cin>>x>>y;
			int rec=1;
			while(y)
			{
				if(y%2==1)
				rec=rec*x;
				x*=x;
				y/=2;
				
				
				
			}
			cout<<"Ans: "<< rec<<endl;
			return 0;
	}
