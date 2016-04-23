#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
	{
			int t,i,j,n,k,count;
			vector<int>a;
			
			cin>>t;
			for(i=0;i<t;i++)
					{	
						cin>>n;
						count=0;
							
						    a.clear();
						for(j=0;j<n;j++)
								{ 	cin>>k;
									a.push_back(k);
									//s.insert(a[j]);
									
							
								}
						    set<int>s(a.begin(),a.end());	
							
							for(set<int>:: const_iterator it= s.begin();it!=s.end();it++)
								count++;
									for(set<int>:: const_iterator it= s.begin();it!=s.end();it++)
									cout<<*it<<"  ";
						cout<<count<<endl;
						s.clear();	
					
					}
	return 0;
	
	
	}
