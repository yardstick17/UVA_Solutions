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

int main()
{

		V(int) a,b,c;
		int t,i,j,k,l,n,x,count;
		scanf("%d\n",&t);
		//S(t);
		F(i,0,t)
		{		count = 0;
				a.clear();
				b.clear();
				c.clear();
			scanf("%d\n",&n);
			//	cin>>n;
			for(j=0;j<n;j++)//	F(j,0,n)
				{
					scanf("%d",&x);
					//cin>>x;
					if(x<=0)
					{
							a.pb(0);
							b.pb(-x);
							c.pb(j);
					}
					else
					{
						a.pb(x);
						
					}
				}
			//	F(j,0,b.size())
			for(j=0;j<b.size();j++)
				{
				//	F(k,0,a.size())
				for(k=0;k<a.size();k++)
					{ 
						//	while(a[k]==0)
						//	k++;
							if(a[k]>b[j])
							{
								a[k]= a[k] - b[j];
								count = count + b[j]*abs(c[j]-k);
								break;
							}
							else
							{
								count = count + a[k]*abs(c[j] - k);
								
								b[j]= b[j]- a[k];
								a[k]=0;
							}
					}
					
					
				}
				
			//	cout<<count<<endl;
				printf("%d\n",count);
				
				
				
				
				
				
		}



return 0;
}

