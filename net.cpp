#include<cstdio>
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
int n,count=0,i,k,j;
double c;
string s;
scanf("%d",&n);
getchar();
getchar();
while(n--)
{
map<string,int> a;
vector<string> b;
count=0;
while(getline(cin,s))
{
if(s.length()==0)
break;
count++;
if(count==1)
{
a[s]=1;
b.push_back(s);
}
else
{
if(a.find(s)==a.end())
{
a[s]=1;
b.push_back(s);
}
else
a[s]=a[s]++;
}


}

sort(b.begin(),b.end());
for(i=0;i<b.size();i++)
{
cout<<b[i];
c=(float)(a[b[i]]*100)/count;
printf(" %.4lf\n",c);
}
if(n!=0)
printf("\n");
}
return 0;
}
