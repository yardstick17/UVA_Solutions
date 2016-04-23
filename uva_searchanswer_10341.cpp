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
#include<math.h>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)
/*float func(int p,)
{       float f;
		f = p*exp(-mid)	+ q*sin(mid) + r*cos(mid) + s*tan(mid) + t*mid*mid + u;
}*/

int main()
{
int t,p,q,r,s,u;
double f,fx,fy;
float low,high,mid;
float err = 0.0000001;

while(scanf("%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u)!=EOF)
{		
		low=-1;
        high = 2;
        fx = p*exp(-1)	+ q*sin(1) + r*cos(1) + s*tan(1) + t*1*1 + u;
		fy = p*exp(-0)	+ q*sin(0) + r*cos(0) + s*tan(0) + t*0*0 + u;  //  > err
        if(fx>-err && fx<err)
		{
			cout<<"1.0000"<<endl;
			continue;
		}
		if(fy>-err && fy<err)
		{
			cout<<"0.0000"<<endl;
			continue;
		}
		
        if((fx  > err) &&  (fy >err))
		{cout<<"No solution"<<endl;
		continue;
		}
		if(fx<err && fy<err)//p*exp(-1)	+ q*sin(1) + r*cos(1) + s*tan(1) + t*1*1 + u  < err &&  p*exp(-0)	+ q*sin(0) + r*cos(0) + s*tan(0) + t*0*0 + u<err)
		{
			cout<<"No solution"<<endl;
		continue;
		}
		if(fx>-err && fx<err)
		{
			cout<<1.0000<<endl;
			continue;
		}
		if(fy>-err && fy<err)
		{
			cout<<0.0000<<endl;
			continue;
		}
		
		while(high-low>0.0000001){
		mid = low + (high-low)/2;
		f = p*exp(-mid)	+ q*sin(mid) + r*cos(mid) + s*tan(mid) + t*mid*mid + u;
		if(f<=0)
		high = mid;
		else
		low = mid;
		}
if(low + high >= 1.9999 || low + high <0.0001)
cout<<"No Solution"<<endl;
else
printf("%.4lf\n",low);			
}
//float t = exp(0);
//cout<<t<<endl;




return 0;
}

