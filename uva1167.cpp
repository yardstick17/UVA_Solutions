#include<iostream>
#include<stdio.h>
#include<map>
#include<vector>
using namespace std;
int main()

	{	map<string,int>m;	
		string s;
		int i,f,total=0;
		float n;
		int t,r;
		cin>>t;
		map<string,int>::iterator it;
		for(i=0;i<t;i++)
		{
		 m.clear();
		 total=0;
		 f=5;
		 
			//while(scanf("%s",&s)!=EOF)
			while(f)
			{   cin>>s;
				m[s]++;
				total++;
				//cout<<s<<" chk"<<endl;
				f--;
			}
			
			for(it=m.begin();it!=m.end();it++)
			{
				r= (it->second/1.0) *100/total;
				cout<<it->first<<" "<<r<<endl;
				
			}
			cout<<it->first<<" "<<(it->second/1.0) *100/total<<endl;
		}
			return 0;
			
	}
