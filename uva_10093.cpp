			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
#include<queue>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{  int t,i,x,y,z,ch,k,len,sum=0,max=0;
	bool flag = 1,flag2=1;
		char s[1000];
		map<char,int>m;
		char c;
		k=10;ch=65;
		for(i=0;i<26;i++)
		{	 c = (char)ch;	
			 m[c]=k;
			 k++;
			 ch++;
		}
		ch = 97; 
		for(i=0;i<26;i++)
		{	 c = (char)ch;	
			 m[c]=k;
			 k++;
			 ch++;
		}
	//	cout<<m['z']<<endl;
		
		
		while(scanf("%s",s)!=EOF)//gets(s))
	{  
		sum =0;
		max = 0 ;
		flag = 1;
		flag2 = 1;
	//	if(s[0]=='-')
	//	s[0]=0;
		len = strlen(s);
	//	cout<<"len is "<<len<<endl;
		for(i=0;i<len;i++)
		{ 
		if(s[i]=='-')
		i++;		
			if(s[i]>64)
			{ch = m[s[i]];//ch = atoi(s[i]);
			sum = sum + ch;
	      	}
	      //	else if(s[0]=='-')
	      	//ch=0;
			else
	      	{
	      	sum = sum + s[i] - 48, ch = s[i]-48 ;}
	      	if(max<ch)
	      	max = ch;
	      	//cout<< -48 + s[i]<<endl;
	      	
		}
	   //cout<<max<<" "<<sum<<endl;
	   
		while(1 && max < 62 && flag ==1)
		{
		
		if(max==0)
		{
			cout<<2<<endl;
			flag=0;
			break;
		}
		
		
		if(sum % max==0 && max < 62  )
				{
					cout<<max+1<<endl;
					flag = 0 ;
				    break;
				}
		    else
			max++;
		}
		
		if(flag==1)
		cout<<"such number is impossible!"<<endl;
		
		}
        





return 0;
}

