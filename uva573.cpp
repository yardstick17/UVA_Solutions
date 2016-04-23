#include<iostream>
#include<stdio.h>
using namespace std;
int main()
		
							{
												
												float U,H,D,F,h;
												
												int i;
												while(1)
												{
														cin>>H>>U>>D>>F;
														long c=0;
														if(H==0)
														break;
														h=0;
														i=0;
														F=U*F/100;
														while(1)
														{ 
															
																c++;		
																					
														  h=h+U;
														  
												if(h>H)
															{ 
															cout<<"success on day "<<c<<endl;
																														
															break;
															
														}
															h= h-D;
														/*	if(h=0 && F==0)
															
															{
																	cout<<"failure on day "<<c<<endl;
																break;															} */
															
															if(h<0)
															{   
															
													         cout<<"failure on day "<<c<<endl;
																break;
															}
															U= U-F;
															if(U<0)
															U=0;
															
																	
											}
										}
										return 0;}
