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
long a[100000];

int main()
{
  long n,m,max;
  long low,high,mid,curr,sum;
  long f,i;
  while(scanf("%ld%ld",&n,&m)!=EOF)
  { sum = 0 ;
  max=0;
  	REP(i,0,n)
  	{
  	
	scanf("%d",&a[i]),sum +=a[i];
	if(max<a[i])
	max= a[i];
	}high = sum;
//	cout<<sum<<endl;
//	cin>>i;
	low = max ;
	f=1;
	while(high>low)
	{   f=1;
		mid = (high + low)/2;
		//cout<<" low, high n mid is : "<<low<<" "<<high<<" "<<mid<<endl;
		//cout<<" mid is : "<<mid<<endl;
		//cout<<" mid is : "<<mid<<endl;
		curr=0;
		REP(i,0,n)
		{
			//curr=0;
				if(curr + a[i] <= mid )	
				{
					curr +=a[i];
			
				}
				else
				{   f++;
					curr= a[i];
			}	
		}
	//	cout<<" f is "<<f<<endl;
		if(f > m)
		low = mid+1;
		else
		high = mid;
	//	cin>>i;
				
	}
	cout<<low<<endl;
  	
	    }





return 0;
}

