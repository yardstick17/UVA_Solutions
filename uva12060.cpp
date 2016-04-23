#include<iostream>
 

int numPlaces(int);
using namespace std;
int main()
{			long long e=0,s=0,g=1;
	
	long long i,j,n,t,x;
		
		while(1)
		{  	cin>>n;
			if(n==0)
			break;
			s=0;
			t=n;
			int f=0;
			while(t)
				{
						t--;
						cin>>x;
			 			s= s + x;
				}
				cout<<"Case  "<<g<<":"<<endl;
			g++;
			int q= s/n;
		
			int r= s%n;
		
			if(r<0 && q==0)
		     	{
			    r= -1*r;
	     			    f++;
				}
			    else if(r<0 && q!=0)
			    r= -1*r;
			    
			if(r!=0)
					{
					  if(f==1)
					  cout<<"  ";
					  int y=r;
					  for(i=2;i<=y;)
							{    
								if(r%i==0 && n%i==0)
									{
									   
										r=r/i; n= n/i;
										
										continue;	
											
										
				
									} i++;
										
								
							}
					}
				
						int rlen,qlen,nlen;	
						rlen=numPlaces(r);
						int q1=q;
						if(q1<0)
						q1= -1 *q1;
						qlen=numPlaces(q1);
					//	cout<<" qlen is : "<<qlen<<endl;
						nlen=numPlaces(n);
					//	cout<<"q is :"<<q<<endl;
		
		
		
		

	
			if(r!=0)
			{
					string a,b,c;
					if(q!=0)
					{
						for(i=0;i<qlen;i++)
								{
									b[i]=' ';
									cout<<b[i];
			
								}
					}
								if(q<0)
								cout<<"  ";
								for(i=0;i<nlen-rlen;i++)
								cout<<" ";
				
						
		 
					
						cout<<r<<endl;
						if(q<0)
						{   e++;
						//	q=-1*q;
						cout<<"- "<<q1;;	
						}
						else if(q>0)
						cout<<q;
						else if(q==0 && f==1)
						cout<<"- ";
						for(i=0;i<nlen;i++)
									{
										b[i]='-';
										cout<<b[i];
								    }
								    cout<<endl;
	    			if(q!=0)
					{
						
					for(i=0;i<qlen;i++)
									{
										b[i]=' ';
										cout<<b[i];
									}
					}
					if(q==0 && f==1 || q<0)
					cout<<"  ";
				//	if()
				//	cout<<"  ";
					cout<<n<<endl;
					}
		else{
		if(q<0)
		cout<<"- "<<-q<<endl;
		else
		cout<<q<<endl;
	}
}

		
		//cout<<q<<" "<<r<< " "<<n<<endl;
return 0;
}









	int numPlaces (int n) {
    //if (n < 0) n = (n == MININT) ? MAXINT : -n;
    if (n < 10) return 1;
    if (n < 100) return 2;
    if (n < 1000) return 3;
    if (n < 10000) return 4;
    if (n < 100000) return 5;
    if (n < 1000000) return 6;
    if (n < 10000000) return 7;
    if (n < 100000000) return 8;
    if (n < 1000000000) return 9;
    /*      2147483647 is 2^31-1 - add more ifs as needed
       and adjust this final return as well. */
    return 10;
}
