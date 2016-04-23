			/* AK_47*/
#include<iostream>
#include<stdio.h>
#include<vector>

#include<set>
#include<map>
#include<algorithm>
#include<map>
using namespace std;
#define S(x) scanf("%d",&x)
#define pb(x) push_back(x)
#define V(x) vector<x>
#define F(i,a,n) for(int i=(a);i<(n);++i)
#define REP(i,a,n) for(i=(a);i<(n);++i)

int main()
{ 		int x,y,z,X,Y,i,j,k,q;
	//	pair<int,int>p;
	//	vector<pair<int,int> > sx,sy;//
	   set<pair<int,int> > sx;
	   map<int,char>m;
		char a,b,d;
		string s;
		cin>>X>>Y;
		while(scanf("%d %d %c",&x,&y,&d) != EOF)
		{ 
		 if(d=='E')
		 k=5;
         else if(d=='W')
		 k=7;
			else if(d=='N')
			k=4;
			else
			k=6;
																									//	cout<<" k is :"<<k<<endl;
	  cin>>s; 
																									//  for(i=0;s[i]!='\0';i++)
																												 // cout<<" "<<s[i];
																								 // cout<<"\n";  //	getline(cin,s);
		m[0]='N';
		m[1]='E';
		m[2]='S';
		m[3]='W';
																																		//	for(i=0;s[i]!='\0';i++)
																																//	cout<<s[i];
																																		//	cout<<"REST is !!"<<endl;
																																		//	for(i=0;)
		for(i=0;s[i]!='\0';i++) 																										 //REP(i,0,)
			{
				                                                      													// j=k%4;     //	if(s[i]=='F')
																													   // cout<<" i is :"<<i<<endl;
				
					if(s[i]=='L' || s[i]=='R')                                       //!='F')
						{ q= 10;
						if(s[i]=='R')
						k+=1;
						else
						k= k - 1;
					}
					else
						{  		// q=10;                                                  // using it as a flag!!
																						//	   cout<<"ghuse to!!! ha ha ha "<<endl;                                                                //if(s[i]=='')
											if(k%4==1)
												{		                                                                                                    //cout<<"1 :ha ha ha "<<endl;
													if(X==x)
														{
															pair<int,int>pii;
															pii= make_pair(x,y);
														   if(sx.find(pii)!=sx.end())
														   { q=10;
														   continue;}
														   else
															sx.insert(make_pair(x,y));                                                              //	sx.insert(x,y);
										    	  
															 k=1;                                                                              	//cout<<" Xu out through: "<<x<<" "<<y<<endl;
									     					q = k%4;	
															break;
														}
														else
														x= x + 1;
											//	pair<int,int>pii;
											//	pii= make_pair(x+1,y);
											//	if(sx.find(pii)==sx.end())
											//	{																//find(sx.begin(),sx.end(),x+1,y)!= sx.end()) //sx.find(x+1,y)!=sx.end()))
						                      //        x= x + 1;
				     	                       																	  //    cout<<"East : x is :"<<x<<" y is:"<<y<<endl;                                                       //}}
				 								}
								
						
											else if(k%4==0)
						 								  {
                                 							if(y==Y)
									  							{	pair<int,int>pii;
																	pii= make_pair(x,y);
														  			 if(sx.find(pii)!=sx.end())
														  			{q=10;
														  			 continue;}
										   							else
																	   {
																	   sx.insert(make_pair(x,y));
																		k=0;												//	cout<<" Yr out through: "<<x<<" "<<y<<endl;
																		q= k% 4;
					     													break;
						             									}  }
															else
															y= y + 1;
															/* pair<int,int>pii;
															pii= make_pair(x,y+1);
													    	if(sx.find(pii)==sx.end()){
					    															y= y + 1; */
							//	cout<<"North : x is :"<<x<<" y is:"<<y<<endl;
						              														
														  }
										else if(k%4==2)
														{																																//	cout<<"2: ha ha ha "<<endl;
														if(y==0)
																	{
																		pair<int,int>pii;
																	pii= make_pair(x,y);
																	if(sx.find(pii)!=sx.end()){
																	q=10;
							 										continue;}
																	 else
																	 {
																	 	sx.insert(make_pair(x,y));
																		k=2;																							// 	cout<<" Yl out through: "<<x<<" "<<y<<endl;
																	    q= k%4;
						    											break;
																	}
																	}
																	else
																	y=y-1;}
																   /* pair<int,int>pii;
																	pii= make_pair(x,y-1);
																	if(sx.find(pii)==sx.end()){
							
																								y= y -1;
							//	cout<<"South : x is :"<<x<<" y is:"<<y<<endl;																//}}
																								}*/
														
						
										else{ 
																																	//	cout<<"pta naji..: ha ha ha "<<endl;
														if(x==0)
															{
																pair<int,int>pii;
															pii= make_pair(x-1,y);
															if(sx.find(pii)!=sx.end()){
															q=10;
															continue;
															}else
															
															{	sx.insert(make_pair(x,y));
																k=3;																									//	cout<<" Xd out through: "<<x<<" "<<y<<endl;
																q= k%4;
																break;
															}}
															else 
															x= x - 1;
															 /*pair<int,int>pii;
															pii= make_pair(x-1,y);
															if(sx.find(pii)==sx.end()){
						
																					x= x - 1;
						//	cout<<"West : x is :"<<x<<" y is:"<<y<<endl; // }}
																					}*/
											}
					
					
						}
			}
				
			if(q==10)																							//	if(x>X )
			cout<<x<<" "<<y<<" "<<m[k%4]<<endl;
			else
			cout<<x<<" "<<y<<" "<<m[k%4]<<" LOST"<<endl;																			//	cout<< "x is : "<<x<<" and y is : "<<y<<endl;				 
				 
				 
		}
	return 0;
	}
