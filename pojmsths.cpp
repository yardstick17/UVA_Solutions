#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
int main()

	
{
	
	
	int t,i,k,m,l,h,r=0;
	

	vector<int> a;
	vector <int> b;
	float A=0.0;
	int x,y;
		cin>>t;
	string s;
	
	for(i=0;i<t;i++)
	{   k=0;r=0;
     	A=0;
		cin>>s;
		while(1)
		{
							char o= s[r];
							int e=s[r]-48;
								if(e==5) break;
								
     								 
	 															switch(e)
																			{
																				case 1:
																							 x= 1;
																								y= -1;
																								break;	
																							
																				case 3:
																							 
		 																						
		 																							x= -1;
																									y= -1;
																									break;
											                                                    	
																				case 4:
																					 	
																					 		x= 1;
																							y= 0;	
																						    break;
																							
																				case 7:
																							
																							x= 1;
																							y= 1;
																							break;
																									
																				case 8:
																						
																							x= 0;
																								y= 1;
																							break;
																						
																				case 9:
																							
																								x= -1;
																								y= 1;
																							  break;
																									
																							  
																				case 6:
																						
																								x= -1;
																								y= 0;
																								break;
																							
																						
																				case 2:
																					
																						x=0;
																						y=-1;
																						break;
																						
																					 }
		  // a[0]=0;
		if(a.size()<1){
		
		a.push_back(0);// b[0]=0;
		b.push_back(0);
		}
	//	cout<<a.size()<<"        "<<endl;
		l=a[k] + x;
		h=b[k] + y;
              a.push_back(l);
			  b.push_back(h);
			  k++;
			  r++;
			 
			  }
			  
		for(m=0;m<k;m++)
		{  A= A + a[m]*b[m + 1 ] - a[m+1]*b[m]; }
		
            if(A<0)
                    A=-A;
                    cout<<A/2<<endl;
			 
			 
			  
		
		 a.clear();
		 b.clear();
	 
	}
	
	
	return 0;
}
