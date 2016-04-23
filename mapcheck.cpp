#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
		map<int, map<int,int> >m[10];
		int x;	cin>>x;
		for(int i=0;i<x;i++)
		{
	
		m[1][i][x]++;
		}
		for(int i=x-1;i>=0;i--)
		{
	//	cin>>x;
		m[2][i][x]++;
		}
//	m[1][1][x]++;	
//	m1[1][1]++;
	
	//	cout<<m1[0][1]<<endl;
		
		
		if(m[1]==m[2])
		cout<<" YES!"<<endl;
		else
		cout<<"Struggle more"<<endl;
		return 0;
		
}
