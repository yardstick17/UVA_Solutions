#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
	int t,i,x,k,j,s;
	vector<int>v;
	//	cin<<t;
	while(1)
	{
		cin>>t;
		if(t)
		break;
		for(i=0;i<t;i++)
		{
			
			cin>>x;
			v.push_back(x);
			
			
		}
		s=0;
	vector<int>::iterator it;
		for(j=0;j<v.size();j++)
		{
			sort(v.begin(),v.end());
			it=v.begin();
			k= *it + *(it + 1);
			s= s + k; //v.begin();
			v.erase(it,it+1);
			//s= s  + v.begin();
			//v.pop_back();
			v.push_back(k);
		}
		
			
			
				
		
	}	
	
}