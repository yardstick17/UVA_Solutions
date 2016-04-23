#include<iostream>
#include<map>
#include <iomanip>
#include<stdio.h>
//#include<algorithm>
using namespace std;
int main()
		{						//long long t=0; 
								double total=0;
									char s[40];
							map<string, int > m;
						std::string line;
                         while (std::getline(std::cin, line))//	while(gets(s))
							{  total++;//cin>>s;
								if(m.find(line)==m.end())
								m[line]=1;
								else
								{
								map<string, int>::iterator it=m.find(line);
								it->second++;
						      	}
						
							}
							//total = t/1.0000;
						//	for(map<string,int>:: const_iterator it1=m.begin(); it1!=m.end();it1++)
						//		{cout<<it1->first<<" "<<it1->second<<endl;
										//total= total + it1->second;
										
	
		
		                // cout<<"Total is :"<<total<<endl;
							for(map<string,int>:: const_iterator it2=m.begin(); it2!=m.end();it2++)
							{   float r= ((it2->second)/total) * 100;
							
							cout<<it2->first;
							printf(" %.4f\n",r);
							}
							
							
							return 0;		
							}
							
							
							
