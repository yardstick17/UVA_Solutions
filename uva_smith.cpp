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
#include<math.h>
long sumofdigit(long n)
{	long sum = 0 ;
	long temp; 
	while(n>9)
	{ temp = n% 10;
	n = n/10;
	sum = sum + temp;	
		
	}
	sum = sum + n;
	return sum;
}
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{
		long t,x,z,y,i,j,n,k;
		long sum,tempo,temp;
		scanf("%ld",&t);
		while(t--)
		{	tempo=0;
			temp=0;
			sum = 0 ; 
			scanf("%ld",&n);//S(n);
			if(n==1)
			{
				cout<<"4"<<endl;
				continue;
			}
			n++;
			
			while(1)
			{       	tempo=0;
			temp=0;
			sum = 0 ; 
			
					tempo = sumofdigit(n);
				//cout<<" sum is : "<<tempo<<endl;
					k=n;
					
					while(k%2==0)
					{
						sum = sum + 2;
						k = k / 2;
				//		cout<<2<<" ";
						
					}
					for(j=3;j<=sqrt(k);j+=2)
					{	
					
						while(k%j==0)
						{
							temp = sumofdigit(j);
							sum = sum + temp;
				//			cout<<j<<" "<<endl;
						   k = k / j;
						   }
					}
					if(k>2)
					{   if(k==n)
						{
							n++;
							continue;
						}
						temp = sumofdigit(k);
						sum += temp; 
						//cout<<k<<endl;
					}
					if(tempo == sum )
					 {  cout<<n<<endl;
					 	break;
					 }
					 n++;
			}
			
		}





return 0;
}

