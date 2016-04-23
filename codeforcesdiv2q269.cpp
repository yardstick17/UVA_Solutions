#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<map>
using namespace std;
int main()
{		int a[6],i,x;//count[6]={0};
		map<int,int>m;
		bool r;
	//	map,int,int>m2;
		while(scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5])!=EOF)
		{   
				//for(i=0;i<6;i++)
				//{
				//	for(j=0;j<6;j++)
				//	{
				//	 if(a[i]==a[j])
				//	 count[i]++;
				//	 }
				
			for(i=0;i<6;i++)
			 m[a[i]]++;
		for(i=0;i<6;i++)
			 {
			 	if(m[a[i]]==5)
			 	r= true;
			 	
			 }
			 x=m.size();
			 if(x>3)
			 {
			 cout<<"Alien"<<endl;
			 m.clear();
			 continue;
			 }
			 else if(x ==3 || r ){
			 cout<<"Bear"<<endl;
			 m.clear();
			  continue;
			  }
			 else{
			 
			 cout<<"Elephant"<<endl;
			 m.clear();
			 continue;}
		}
		return 0;
	}
		
