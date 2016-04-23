#include<map>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
		
				long long t,n,i,j,z,k,count,h;
				long long x;
				
				
				vector<int> v;
				
				vector<int>::iterator it;
				vector<int>::const_iterator it2;
				cin>>t;
				
				map<int,int>m;
				
				for(i=0;i<t;i++)
				{   z=0;
						cin>>n;
						count=0;
						m.clear();
						v.clear();
						
								for(j=0;j<n;j++)
									{  cin>>x;
										
										if(m[x]==0){
										
											m[x]=1;
										v.push_back(x);
										}
										else
										{
											if(count<m.size())
											count=m.size();
											//it=find(v.begin(),v.end(),x);
										//	cout<<m.size()<<" Check size"<<endl;
											//it=find(v.begin(),v.end(),x);
											for(it=v.begin();it!=find(v.begin(),v.end(),x);it++)
											v.erase(it);
										    v.erase(it);
											v.push_back(x);	
//											cout<<" Middle me size Check:"<<v.size()<<"Also data at V is"<<v[z]<<endl;									
											m.clear();
											z++;
											
										for(h=0;h<v.size();h++)//	for(it2=v.begin();it2!=v.end();it2++)
											{
											m[v[h]]=1;
										//	cout<<"Check V: "<<v[h]<<endl;
											}
										//	cout<<"Check size: "<<v.size()<<endl;
											
										}	
									}
									if(count<m.size())
									count=m.size();
									//if(i==t-1)
									//cout<<count;
									//else
									cout<<count<<endl;
				}
				
				
				
				return 0;
				
				
}

