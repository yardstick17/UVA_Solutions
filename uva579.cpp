#include<iostream>
#include<stdio.h>
#include<map>
#include<iomanip>
using namespace std;
int main()
{				map<int,int> map;float p;
				string s;	int i;
			int m,h;float ans; float d[15];
			for(i=0;i<=12;i++)
				{
					
					
					map[i]=30*i;
					
				}
			
				while(1)
				{
				
				cin>>s;
				if(s=="0:00")
				break;
				if(s[2]==':')
				{
				int a=(int)s[0]-48;
				int b=(int)s[1]- 48;
				 h= a*10 + b;
				int c=(int)s[3]-48;
				int d= (int)s[4]-48;
				m= c*10 + d;
				}
				else{
				
				 h=(int)s[0]-48;
				
				int c=(int)s[2]-48;
				int d= (int)s[3]-48;
				m= c*10 + d;
				}
			
				float degree=map[h];
				float t = 55/10.0000*m;
					p= degree-t;
					if(p<0)
					p= -1*p;
					if(p>=180)
				{
					p=360-p;
					if(p<0)
					p=360+p;
			}
				cout<<fixed<<setprecision(3)<<p<<endl;
			/*	if(degree-t>180)
			{
				p= degree-t;
				p=360-p;}
				cout<<p<<endl;
				
			*/	
			
				
			
			
			
			
			
			//	cout<<h<<m<<endl;
			}
			return 0;
		}
				
				
				
				
		         
				 
				 
				 
				 
				 
				 
				 
				 
				 /*for(i=0;i<=12;i++)
				 {
				 d[i]=i*30;
				 i++;
				 }
				 ans=d[(int)h];
				 float t= 55/10.0000*m;
				 if(ans - t>180)
				 ans=360-ans;
				cout<<t<<endl;
				 cout<<ans +t<<endl; }  //		cout<<h<<m<<endl;				}
				return 0;
} */
