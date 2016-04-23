			/* AK_47*/
#include<iostream>
#include<math.h>
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

int main()
{
//freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 
 long t,z,i,d,j,k,m,s,p,sum,si;
 double x,y,ans;
 scanf("%d%d%d",&s,&m,&p);
 si=s;
 k=m;
 sum=0;
 	while(m-1)
 	{
 		s= s + (float)s*p/100;
 		sum = sum + s;
 		cout<<"check : "<<s<<endl;
 		m--;
 	}
 	ans = (si + (float)si*p/100 + (float)p*sum/100)/( k + (float)p*(k-1)/100);
 	//cout<<" chutiyapa : "<<si + (float)si*p/100<<endl;
 /* d=pow(2,m-1);
 x= m + (float)1/d;
 y= 1 + (float)1/d; */
 //ans= (s + p)*y/x;
 printf("%.5f\n",ans);  //cout<<ans<<endl; 
 
 





return 0;
}

