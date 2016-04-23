			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<algorithm>
#include<map>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
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
{ 	 int x,y,t,n,j,i,r;
     long long int count;
	map<int,int>v,d;
	map<int,int>::iterator it,it2;
		fr(&t);// 	inputting no. of test cases// S(t);
	REP(i,0,t) //F(i,0,t)
	{	v.clear();
		d.clear();
		count =0;
		fr(&n); //	no. of villages// cin>>n;
		REP(j,0,n)
		{
			cin>>x;//S(x); //	fr(&x);//S(x);
			if(x>=0)
			v[j]=x;
			else
			d[j]= -x;
				
		}
		it=v.begin();
		it2=d.begin();
		r=n;
		while(r!=0)//it2!=d.end())
		{
			if(it->second>it2->second)
			{
				count = count + abs(it2->first - it->first) * it2->second;
				it->second= it->second - it2->second;
				it2->second=0;
				r--;
				it2++;
				
			}
			else if(it->second<it2->second)
			{			count = count + abs(it2->first - it->first) * it->second;
					it2->second= it2->second - it->second;
						it->second=0;
					r--;
						it++;
			}
			else
			{
				count = count + abs(it2->first - it->first) * it->second;
				it++;
				it2++;
				r= r-2;
			}
				
			}
			cout<<count<<endl;
				}
		
return 0;
}

