#include<iostream>
#include<map>
//#include<>
using namespace std;
int main()
{  
 	
       int t,s;
	map<int,int>m;
	int i,k;
	int x;
	map<int,int>::iterator it;
	
	while(1)
	{
		s=0;m.clear();
		
		cin>>t;
		if(t==0)
		break;
		for(i=0;i<t;i++)
		{		cin>>x;
				m[x]++;
				
		}
		while(m.size()!=0)
		{ it= m.begin();
			cout<<"Size Check: "<<m.size()<<endl;
			if(it->second>=2)
			{
				k=2*(it->first);
				it->second -= 2;
					if(it->second==0)
					m.erase(it->first);
					cout<<"Size Check 2 : "<<m.size()<<endl;
					
			}
			else
			{
				k= it->second;
				cout<<k<<endl;
				it++;
				k = k + it->second;
				it--;
				m.erase(it,++it);// (it+1)->second;
				//m.erase(it);
				//k= k + it->second;
				//m.erase(it);
				
			}
			s= s + k;
			m[k]++;
			
		}
		cout<<"Size Check: "<<m.size()<<endl;
		cout<<s<<endl;
		
		
		}
		return 0;
	}