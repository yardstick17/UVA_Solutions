			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<map>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
	V(int) arr;
int half(int i)
{ i= i/2;
//cout<<" i in half funct is: "<<i<<endl;
	arr.pb(i);
}

int main()
{
		int t,x,y,z,a,b,c,k,o,r,g,m,max,n;
	
	
		set<int>red,temp;
		set<int>green;
		set<int>blue;
		set<int>::iterator it,it2;
		vector<int>::iterator it3;
		S(t);
		F(i,0,t)
		{		arr.clear();
				red.clear();
				green.clear();
				blue.clear();
				S(r);
				S(g);
				scanf("%d",&o);
				S(m);
				F(j,0,r)
				{
						S(x);
						red.insert(x);
					//	v[0].pb(x);
						
				}
				F(j,0,g)
				{
					S(x);
					green.insert(x);
					//	v[1].pb(x);
					
				}
				//F(j,0,b);
				for(int q=0;q<o;q++)	{
					S(x);
					blue.insert(x);
					}
			
			
		

			for(n=0;n<m;n++)
			{
				
				a = *red.rbegin();
			//	cout<<" red max is : "<<a<<endl;
			
				b = *green.rbegin();
				//	cout<<" green max is : "<<b<<endl;
						c= *blue.rbegin();
			//	cout<<" blue max is : "<<c<<endl;
				//it3=blue.end();
				
				if(a>b)
				{
					max=a;
					k=0;
					it2=red.end();
					it=red.begin();
				}
				else
				{
					max=b;
					k=1;
					it2=green.end();
					it=green.begin();
				}
				if(max<c)
				{
					max=c;
					k=2;
					it2=blue.end();
					it=blue.begin();
				}
			
				for_each(it,it2,half);
				if(k==0)
				{ //cout<<"hello"<<endl;
					red.clear();
					for(it3=arr.begin();it3!=arr.end();it3++)
					{
					//	cout<<"inserting :"<< *it3<<endl;
						red.insert(*it3);
					}
					
					
					//copy(arr.begin(),arr.end(), );
				}
				if(k==1)
				{
					green.clear();
					for(it3=arr.begin();it3!=arr.end();it3++)
					green.insert(*it3);
				}
				if(k==2)
				blue.clear();
				for(it3=arr.begin();it3!=arr.end();it3++)
				blue.insert(*it3);
			
			}
			
			
			
				a= *red.rbegin();
				b= *green.rbegin();
				c= *blue.rbegin();
				if(a>b)
				{
					max=a;
				//	it2=red.end();
				//	it=red.begin();
				}
				else
				{
					max=b;
				//	it2=green.end();
				//	it=green.begin();
				}
				if(max<c)
				{
					max=c;
				//	it2=blue.end();
				//	it=blue.begin();
				}
				
			cout<<max<<endl;
		}


return 0;
}

