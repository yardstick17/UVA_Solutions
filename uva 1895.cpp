#include<iostream>
#include<map>
//#include<>
using namespace std;
int main()
{  
 	
       long t,s;
	map<int,int>m;
	long i,k;
	long x;
	map<int,int>::iterator it,it2,it3;
	
	while(1)
	{
		s=0;
		m.clear();
		
		cin>>t;
		if(t==0)
		break;
		for(i=0;i<t;i++)
		{		cin>>x;
				m[x]++;
				
		} 
		it3=m.begin();
		while( m.size()>1 || m[it3->second]>1   )
		{ it= m.begin();
		//	cout<<"Size Check: "<<m.size()<<endl;
			if(it->second>=2)
			{
				k=2 * (it->first);
				it->second -= 2;
					if(it->second==0)
					m.erase(it);
				//	cout<<"Size Check 2 : "<<m.size()<<endl;
				
					
			}
			else
			{
				k= it->first;
				it3=it;
			//	cout<<" k1 is :"<<k<<endl;
				//cout<<k<<endl;
				it++;
				k = k + it->first;
				//	cout<<" k2 is :"<<k<<endl;
				if(it->second==1)
				{
				it++;
				
				m.erase(it3,it);}
				else
				it->second--;
			//	cout<<" Map remaining is:"<<endl;
			//	for(it2=m.begin();it2!=m.end();it2++)
			//	cout<<it2->first<<endl;
				// (it+1)->second;
				//m.erase(it);
				//k= k + it->second;
				//m.erase(it);
				
			}
			s= s + k;
			it3=m.begin();
			m[k]++;
			
			
			//	cout<<" s is :"<<s<<endl;
			
		}
	//	cout<<"Size Check: BABA "<<m.size()<<endl;
		cout<<s<<endl;
		
		
		
		}
		return 0;
	}
