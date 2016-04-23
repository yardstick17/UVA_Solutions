#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
	set<int>s;
	set<int>::iterator it;
	s.clear();
	it=s.find(20);
	if(it==s.end())
	cout<<"WAAAH!"<<endl;
 return 0;
 }
