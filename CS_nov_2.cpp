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
int t,i,slen,k,f=0,len,g=1,count= 0 ;
string s;
cin>>t;
while(t--)
{ 	count= 0 ;
f=0;
g=1;
    cin>>s;
	slen = s.length();
//	len = slen;
//	if(len%2 == 0)
	len = slen/2 - 1;
///	else
//	len = slen/2;
//	cout<<"len is: "<<len<<endl;
	//	for(i=0;i<slen;i++)
		//i=0;k=0;
		//	while(i <= len){
		//	cout<<"string chk: "<<s[i]<<"  "<<s[slen - 1 - k ]<<endl;
		//	i++;k++;
		//					}
			i=0;k=0;
		
		while(i <= len)
		{      
				if(s[i] != s[slen- 1 - k])
				{	
					if(s[i+1] == s[slen- 1  - k])
					{	    i++;
							f++;
							count++;
							
								
					}
					else if( s[i]==s[slen-1-1-k])
					{	count++;
						k++;
						f++;
					}
					else
					{
						cout<<"NO"<<endl;
						g=0;
						break;
					}
					if(f==2)
					{ cout<<"NO"<<endl;
				    	break;
					}
				}
				else
				count++;
				i++;
				k++;
				
		}
		if((g!=0 && f < 2 && count == slen/2))
		cout<<"YES"<<endl;
		else if(f==1 && count == slen/2 - 1 && slen%2==0)
		cout<<"YES"<<endl;
		else if(f==1 && count < slen/2 && slen%2!=0)
			cout<<"NO"<<endl;
		
	//	cout<<" check f : "<<f<<endl;
		
}




return 0;
}

