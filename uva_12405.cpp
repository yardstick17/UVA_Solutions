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

int t,sc,flag,count,len,f=1;
string s;
cin>>t;
while(t--)
{  count = 0;
	flag = 0;
	sc= 0 ;
	cin>>len;
	cin>>s;
	F(i,0,len)//s.length())
	{
		if(s[i]=='.')
		{
			count++;
			flag=1;
		}
		
		
	if(count==2 && flag ==1 )
	{
		sc++;
		count=0;
		i++;
		flag = 0;
	}
	else if((count == 1 && s[i]=='#') || (count==1 && s[i+1]=='\0'))
	{	count=0;
		sc++;
		i++;
	}
	}
	
cout<<"Case "<<f<<": "<<sc<<endl;
f++;
}



return 0;
}

