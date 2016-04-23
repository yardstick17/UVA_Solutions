#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
void fr(int *a)
{
register char c=0;
while (c<33) c=getchar();
*a=0;
while (c>33)
{
*a=*a*10+c-'0';
c=getchar();
}
}
int main()
{
	 int t,x,q,i,j,n,d,h,g,cost,p;
	vector<int>v;
	vector<int>::iterator it;
	set<int>s;
	while(1)
	{  /*fr(&n);*/scanf("%d",&n);
		if(n==0)
		break;
		cost=0;
		s.clear();
		v.clear();
		for(i=0;i<n;i++)
		{
		scanf("%d",&d);//	fr(&d);
			for(j=0;j<d;j++)
			{
				scanf("%d",&x);//	fr(&x);//
					if(s.find(x)==s.end())
					{
						s.insert(x);
						cout<<" Inserted no. in  S is:"<<x<<endl;
					}
					else
					{
					v.push_back(x);
					cout<<" Inserted no. in  V is:"<<x<<endl;}
					//cout<<x<<" Check"<<endl;
					//s.push_back(x);
			}
			//sort(s.begin(),s.end());
			q= *s.begin();
		//	s.erase(s.begin());
		//	cout<<"Hello"<<endl;
		
		p= *s.end();
		
		
		
		
		//	if(!s.empty())
		//	{
			//	cout<<"Hello in iff"<<endl;
		//	p= *s.end();
			
		//	s.erase(p);
		//	cout<<"Hello la la la iff after"<<endl;
		//	}
		//	else
		//	{ p=q;
		//		v.pop_back();
		//	}
			s.erase(s.begin());
				p= *s.end();
			s.erase(p);
			s.erase(s.begin());
			cout<<" P is : "<<p<<endl;
				cout<<" Q is : "<<q<<endl;
			
			cost= cost + p- q;
		//	cout<<"Hello"<<endl;
			
			/* for(it=v.begin();it!=v.end();it++)
			{   cout<<*v.begin()<< " hmmm"<<*v.end()<<endl;
				if(s.find(*it)==s.end())
				{		cout<<*it<<" Iterator func."<<endl;
					s.insert(*it);
					if(it!=v.end())
					v.erase(it);
					else
					v.pop_back();
				}
			}
			
			
			
			*/
			for(h=0;h<v.size();h++)
			{   //cout<<" V is: "<<v[h]<<endl;
				if(s.find(v[h])==s.end())
				{	
					s.insert(v[h]);
				//	g=v[h];
					
				v.erase(v.begin()+h);
				}
			}
				for(h=0;h<v.size();h++)
			  cout<<" V is: "<<v[h]<<endl;
			
			
			set<int>::iterator it;
			for(it=s.begin();it!=s.end();it++)
			cout<<"S is : "<<*it<<endl;
		}
		cout<<cost<<endl;
	}
	return 0;
}
		
		
		
		
        //	p= *s.end();
        //	cout<<" Chk 1:"<<p<<endl;
		//	
//	 vector<int>::iterator it;
//	 for(it=s.begin();it!=s.end();it++)
//	 cout<<*it<<" Checking values"<<endl;
//	s.erase(s.begin());
	
//	for(it=s.begin();it!=s.end()-1;it++)
//	{
//	}
	
//	s.erase(s.end());
//	for(it=s.begin();it!=s.end();it++)
//	 cout<<*it<<" Checking values"<<endl;
	// cout<<*it<<" new Checking values"<<endl;
	
	/*	it=s.begin();
	   q= *it;
	   cost=cost-q;
	   s.erase(it);
			it=s.end();
			p= *s.end();
			cost = cost + p;			
			
			
			
			s.erase(it);
			*/
	
	
	
	
	
