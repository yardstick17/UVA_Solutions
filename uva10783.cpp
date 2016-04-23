#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
		int s,x,i,y,t;
		cin>>t;
		int j=1;
		while(t){
		
		scanf("%d",&x);
		scanf("%d",&y);
		if(x%2==0)
		x++;
		if(y%2==0)
		y=y-1;
		s=0;
		for(i=x;i<=y;i=i+2)
		{ s= s + x;
			x=x + 2;
		
		}cout<<"Case "<<j<<": "<<s<<endl;
		j++;
		t--;}return 0;
		}
