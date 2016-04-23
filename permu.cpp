# include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<sstream>

using namespace std;
 
/* Function to swap values at two pointers */
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
  
/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(char *a, int i, int n) 
{
   int j; 
   if (i == n)
     printf("%s\n", a);
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j)); //backtrack
       }
   }
} 
 
/* Driver program to test above functions */
int main()
{
   char a[1000]; //= "123";
	//a[0]='0';
	int t;
	//string str = "";
		char c;
	scanf("%d",&t);
	string Result;
	for(int i =1;i <=t;i++)
	{
		c =i;
		cout<<c<<endl;
	//	str =  str + to_string(i);
		
		
		int Number = i;       // number to be converted to a string

          // string which will contain the result

ostringstream convert;   // stream used for the conversion

convert << Number;      // insert the textual representation of 'Number' in the characters in the stream

Result = Result + convert.str();
			
		
	}
//	a = Result;
	//a[i]=i;
   permute(Result, 0, 2);
   getchar();
   return 0;
}
