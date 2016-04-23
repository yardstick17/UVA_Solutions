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

int main()
{       vector<long>v; set<long>s;
        long x,maxr,maxg,maxb;
		short int t,a,b,c,r,g,o,y,z,m,n;
	//	set<long long>red,green,blue;
		S(t);
		F(i,0,t)
		{	v.clear();
		//	red.clear();
		//	green.clear();
		//	blue.clear();
			
		
		
			S(r);
			S(g);
			S(b);
			S(m);
			maxr=0;
			F(j,0,r)
			{
				S(x);
				if(x>maxr)
				maxr=x;
				//red.insert(x);
			}
			maxg=0;
			F(j,0,g)
			{
				S(x);
				if(maxg<x)
				maxg=x;
				//green.insert(x);
			} maxb=0;
			F(j,0,b)
			{
				S(x);
				if(maxb<x)
				maxb=x;
				//blue.insert(x);
			}
			//a = *red.rbegin();
			//b = *green.rbegin();
			//c = *blue.rbegin();
		//	if(a>b)
		//	max=a;
		//	else
		//	max=b;
		//	if(max<c)
		//	max= c;
			s.insert(a);
			s.insert(b);
			s.insert(c);
		//	cout<<" a is :"<<a<< " b is :  "<<b<<" c is : "<<c<<endl; */
			
		    /*				
			for(n=0;n<m;n++)
			{ 
				x=*s.rbegin();
			// if(s.size()>=1)
				s.erase(x);
				s.insert(x/2);	
					
			}*/
			
			
			v.pb(maxr);
			v.pb(maxg);
			v.pb(maxb);
			F(j,0,m){
			sort(v.begin(),v.end());
			v[2]=v[2]/2;	
		cout<<" loop count: "<<j<<endl;
			}
			F(j,0,m)
			{
				x=*(s.rbegin());
				s.erase(x);
				s.insert(x/2);
				cout<<" loop count 2: "<<j<<endl;
			}			
			
			
			cout<<v[2]<<endl;		
		//	cout<<"NEXT ans: "<<*s.rbegin()<<endl;			
						
							
		}





return 0;
}

