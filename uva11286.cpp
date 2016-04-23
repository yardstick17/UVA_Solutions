#include<iostream>
#include<map>4
using namespace std;
int main()
{
		int t,count,i,j,k,x;
		int f1,f2;
		map<int, map<int,int> >m;
		while(1)
		{   m.clear();
			cin>>t;
			count=t;
			if(t==0)
			break;
			for(i=0;i<t;i++)
			{
				for(j=0;j<5;j++)
				{	cin>>x;
					m[i][x]++;
					
				}
				//f1=-100000;
				//f2=0;
				for(k=0;k<i;k++)
				{   
					if(m[i]!=m[k])
					f1=-1;
					else 
					{f1=0;
					break;
					}
				}
					//if(f1<f2)
					count=count+f1;
					//else
					//count= count +f2;
			}
	
		
		cout<<count<<endl;
		}

return 0;
}
