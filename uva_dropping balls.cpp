			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<math.h>
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
 int a[21][1000000];
int power(long x,long y)
{
		long rec=1;
			while(y)
			{
				if(y%2==1)
				rec=rec*x;
				x*=x;
				y/=2;
				
				
				
			}
		return rec;
		}
int main()
{
			long t,s,i,j,k,d,q,len,r;
			
			a[1][1]=1;
		//	int b=2;
			k=1;
		for(j=2;j<=20;j++)
		{
			for(i=1;i<=k;i++)
			{ 
						a[j][i]=2*a[j-1][i];

			     	a[j][i+k]=2*a[j-1][i] + 1; 
			  
			
			}
			 k=2*k;	
			// if(k>b)
		   	  // break;	
				
		}
	
	cin>>t;
	while(t)
	{ t--;
		cin>>d>>q;
		len = power(2,d-1); //(int)pow(2,d-1);
	
	if(q%len==0)
	q=len;
	else
	q = q % len;
	cout<<a[d][q]<<endl;
		
  	
  	}
  	cin>>r;
  			

return 0;
}

