#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<list>
//#include<stack>
//#include<conio.h>
using namespace std;
              
void fr(int *a)
{
	register char c=0;
	while (c<33) c=getchar();
	*a=0;
	while (c>33)
	{
		*a=*a*10+c-'0';
		c=getchar();
	}
}
int main()
{
    int t;
    fr(&t);
    while(t--)
    {
              int num1=0,num2=0,a,n;
              long long int dp[10005];
              for(int i = 0 ; i < 10000 ; i++)
              dp[i] = 0;
              for(int i = 0 ; i < 4 ; i++)
              {
                                fr(&a);
                                num1 = num1*10+a;
              }  
              dp[num1] = 0;
              
              for(int i = 0 ; i < 4 ; i++)
              {
                                fr(&a);
                                num2 = num2*10+a;
              }  
              dp[num2] = 0;
              
              fr(&n);
              while(n--)
              {
                        int num = 0;
                        for(int i = 0 ; i < 4 ; i++)
                        {
                                fr(&a);
                                num = num*10+a;
                        }   
                        dp[num] = -1;                     
              }
              
              list<int> l;
              l.push_back(num1); 
              int a1,s1,s2,s,flag;
              while(!l.empty())
              {
                               s = l.front();
                              // cout<<s<<endl;
                              flag = 0;
                               if(s==num2)
                               break;
                               int s1 = s;
                               int p = 10;
                               for(int i = 0 ; i < 4 ; i++)
                               {
                                      // cout<<" i " <<i<<endl;
                               
                                       a1 = s1%10;
                                       if(a1 == 9)
                       
                                       s2 = s-(9*p)/10;
                                       else
                                           s2 = s + (p/10);
                                       
                                  //     cout<<"s2 : "<<s2<<" ";
                                       if(dp[s2] == 0) 
                                       
                                       {
                                                 l.push_back(s2);
                                                 dp[s2] = dp[s]+1;
                                       }                          
                                       
                                       if(a1 == 0)
                                       s2 = s + (9*p)/10;
                                       else
                                       s2 = s - (p/10);
                                       
                                      // cout<<s2<<endl;
                                       
                                       if(dp[s2] == 0)
                                       {
                                                 l.push_back(s2);
                                                 dp[s2] = dp[s]+1;
                                       }                          
                                                    
                                       s1 = s1/10;
                                       p = p*10;
                               }
                               l.pop_front();
                               flag = 1;
              }
              if(flag == 0)
              printf("%lld\n",dp[num2]);
              else
              printf("-1\n");
    }
    
    return 0;
}
