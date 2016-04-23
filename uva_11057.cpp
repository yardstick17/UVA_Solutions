			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<algorithm>
#include<map>
using namespace std;
#define S(x) scanf("%ld",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
int binary_search(long *a,long low,long high,long y,long i);

int main()
{
  	long t,i,j,k,x,m,y,index;
  	long a[10005];
  	map<long,long>map1;
  
  	while(scanf("%ld\n",&t)!=EOF)
  		{
		 map1.clear();
  		//  z--;
	  	  REP(i,0,t)
	  	  {
	  	  	S(x);
	  	  	a[i]=x;
	  	  
	  	  }
	  	  scanf("%ld",&m);
	  	 // scanf("\n");
		
	  	  sort(a,a+ t);
	  	 // for(k=0;k<t;k++)
	  	 // cout<<a[k]<<" ";
	  	 
	  	  REP(i,0,t)
	  	  {                                                      //cout<<" hello!"<<endl;
	  	  	                                                     //x = a[i];
	  	  	y= m - a[i];
	  	                                                          //	cout<<"searching for: "<<y<<endl;
	  	  	if(y>=0)
				{
	  	  		
	  	  	
					index = binary_search(a,0,t-1,y,i);
				//	cout<<"index is :"<<index<<endl;
	  	  				   if(index != -1 && index != i )
	  	  					 map1[abs(a[i]-y)] = a[i];//	c.pb(x - a[index]);
											
				}
				  
			} 
		  
		  x = map1.begin()->second;	
		if(x<m-x)
			cout<<"Peter should buy books whose prices are "<<x<<" and "<<m - x<<"."<<endl;
			else
			cout<<"Peter should buy books whose prices are "<<m-x<<" and "<<x<<"."<<endl;
			
			
			
			
			printf("\n");
  	




}
return 0;
}



int binary_search(long* a,long low,long high,long y,long i)
{	long mid = (low + high)/2;
//	cout<<"low and high " <<low<<"  "<<high<<endl;
	//	cout<<a[mid]<<endl;
	if(high>=low)
		{
				if(low == high && a[mid]==y)
				{ 
						if(i==mid && a[mid-1]==y)
							return (mid-1);
						else if(i==mid && a[mid+1]==y) 
							return (mid+1);
						
						return mid;
			     }
				else if(a[mid]==y)
				return mid;
				else if(a[mid]>y)
				return binary_search(a,low,mid - 1,y,i);
				else //(a[mid]<y)
				return binary_search(a,mid + 1,high,y,i);
				
		}
		else
		return -1;
}

