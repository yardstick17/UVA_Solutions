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
{ int t,x,e,z,i,j,k,r,q,n;
map<int,int>m;
 int count,tail,cf;
 fr(&t);//)S(t);
 REP(i,0,t)
{	m.clear();
	count = 0;
	tail=0;
	cf=0;
fr(&n);//	S(n);
	REP(j,0,n)
	{
	fr(&x);//	S(x);
		if(m.count(x)==0){
		
		m[x]=j;
		count++;
		r=1;
		
		}
		else
		{   if(count>k)
			k=count;
			q=m.find(x)->second;
			//cout<<" q is : "<<q<<endl;
			if(q>=tail){
			
					k=j-tail;
					tail= q+1;//m.find(x)->second + 1;
				//	cout<<"tail is :"<<tail<<endl;
		//	m.erase(x);
				//m.find(x)->second=j;
					m[x]=j;
				//	cout<<"j is :"<<j<<endl;
				if(k>cf)
					cf=k;
					count = j-q;
			//k-1;
		//	if(count==0)
		//	count++;
	//	r=0;
	//	e=1;
			
		}
		else{
			m[x]=j;
			count++;
		}
		}
	//	cout<<" count is :  "<<count<<" cf is :  "<<cf<<endl;
	} //if(r==1&& e==1)
		//count++;
  z= count>cf?count:cf;
	cout<<z<<endl;
}





return 0;
}

