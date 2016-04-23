			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<map>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
void fr(long long int *a)
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
{		long long int i,j,n,k,l,x,r,count,sum;
	V(long long int) v;
	set<long long int>s;
	set<long long int>::iterator it;
		while(1)
		{		v.clear();
				count=0;
				fr(&n);
				//S(n);
				if(n==0)
				break;
				REP(i,0,n)
				{
					fr(&x); //S(x);
					//v.push_back(x);
					s.insert(x);
										
				}
					if(s.size()==2)
				{  it=s.begin();
					sum = *it++ + *it;//v[0] +  v[1];
					cout<<sum<<endl;
					continue;
				}
				
				
				
				
				
				
				
			/*	sort(v.begin(),v.end());
				int s;
				if(v.size()==2)
				{
					s= v[0] +  v[1];
					cout<<s<<endl;
					continue;
				}
			//	else if(v.size()==1)
	     	   
		//	 s= v[0];
		//	 cout<<s<<endl;
		//	continue;
		//	}
			s= v[0] +  v[1];
		//	cout<<" s is :"<<s<<endl;
			v.push_back(s);
			int q= v.size()-1;
			sort(v.begin(),v.end());
			k=2;
			REP(i,2,q)
			{
			
			//	k=i;
				r= v[k] + v[k+1];
			
				v.push_back(r);
				sort(v.begin()+i,v.end());
				s= s+ r;
				k+=2;
				
			}
			cout<<s<<endl;
		}
			




*/
}

return 0;
}

