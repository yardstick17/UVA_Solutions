#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	long t,total,i,x;
	vector<int>v;
	int s[100000]={0};
	while(1)
	{   
	
		cin>>t;
		//s[100000]={0};
		if(t==0)
		break;
		for(i=0;i<t;i++)
		{
			cin>>x;
			v.push_back(x);
			
		}
		sort(v.begin(),v.end());
		
		if(v.size()>=2)
		s[0]=v[0] + v[1];
		else
		s[0]=v[0];
		total= s[0];
		for(i=1;i<t-1;i++)
		{
	   	s[i] = s[i-1] + v[i+1]; 
		 total= total + s[i];
	//	cout<<s[i]<<endl;
		}
	cout<<total<<endl;
	v.clear();
	
	
	}
return 0;
}
