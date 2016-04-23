#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;

int main()
{
		long long int i,j,k,l;
		cin>>k;
		long long int a[k];
		for(j=0;j<k;j++)
		cin>>a[j];
		sort(a,a+k,greater<int>());
		long long int s=0,o=k;
		if(k!=1)
		{
		s=a[0]*k + a[1]*k;
		
		for(i=2;i<k;i++)
		{
		s=s+ a[i]*(--o);
		}
		cout << s;}
		else
		cout << a[0];
		return 0;
		
}
