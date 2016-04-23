#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long t,i,k,h,l,p,x=2,level=0,min,max,a[32],j;
	cin>>t;
	for(i=0;i<t;i++)
	{   level = 0;
		x= 2;
		cin>>k;
		min= k;
		
		max=k;
			j=1;
		for(h=0;h<32;h++)
		{
			
		    a[h]=j;
		    j=2*j;
       }
		
		while(1)
		{  if( k % x != 0)
			break;
			else 
			{ x=2*x;
				level+= 1;
				//cout<<level<<endl;
				
			}
		} 
		
		//l=1;
		//p=1;
	//cout<<" Level is : "<<level<<endl;
		
	/*	while(l<level + 1)
		{
			min=min-l;
			l *=2;
			
		}
	
		while(p<level+1)
		{
			max= max + p;
			p *=2 ;
		}
		cout<<min<<" "<<max<<endl; */
        cout<<min-(a[level]-1)<<" "<< max +(a[level]-1)<<endl;}
	return 0;
}
	

