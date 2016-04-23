			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<queue>
#include<stdlib.h>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{

int t,i,n,h;
S(t);
while(t--)
{
	scanf("%d %d",&n,&h);
	//cout<<" n-h is: "<<h<<endl;
int c[n];
for(i=0;i<n-h;i++)//REP(i,0,n-h)
c[i]=0;
REP(i,n-h,n)
c[i]=1;

//scanf("\n");
		//c[n]='\0';
//		cout<<n<<endl;	 */
	//	REP(i,0,n)
	//	cout<<c[i]<<" ";
//		int c[]={0,0,0,1};
		
	do{	 
	for(i = 0 ;i < n ;i++)
	cout<<c[i];
	cout<<endl;	
//	cout<<endl;
	}while(next_permutation(c,c+n));
if(t!=0)
cout<<endl;
}


return 0;
}

