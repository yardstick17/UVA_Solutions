			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<list>
#include<vector>
#include<iomanip>
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
int t,n,f,v[10009],req,c,j;
double vol[10009];
scanf("%d",&t);
while(t--)
{

scanf("%d%d",&n,&f);
f =f + 1;
for(j = 0 ;j<n; j++)
cin>>v[j];
sort(v,v + n,greater<int>());

//cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;

    F(i,0,n)
		{
		
		vol[i] =3.14159265358979323846264338327950 * v[i] * v[i];
	//	cout<<vol[i]<<endl;
		}
double high,low,mid;
low = 0;
high = vol[0];
//else
//cout<<n-f<<endl;
//float curr;

while(high-low>=0.0001)
{
    //cout<<"high is : "<<high<<endl;
    //cout<<"low is : "<<low<<endl;

	//curr = 0 ;
	mid = low + (high - low)/2;
	req = 0;
	F(i,0,n)
	{   //curr=0;
		//while(curr + mid <= vol[i])
		req = req + vol[i]/mid;
			//req++;
			//curr += mid;
	}
	if(req>=f)
	{
		low = mid;
	}
	else
	high = mid;
	
	//cout<<low<<" and "<<high<<endl;
	
}
printf("%.4lf\n",low);}
//cout<<fixed<<setprecision(4)<<low<<endl;}
return 0;
}

