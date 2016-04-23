#include<iostream>
#include<conio.h>
using namespace std;
int a[1000];
int main()
{
    int count = 0;
    int x = 1000;
    for(int m = 2; m<x;m++)
    {
            a[m] = 1;
    }
    
    for(int p = 2 ; p<x ; p++)
    {
            if(a[p])
            {
                    for(int i = p ; i*p < x ; i++)
                    {
                          int y = i*p;
                          a[y] = 0;
                    }
            }
            
    }
    for(int p = 2 ; p < x; p++)
    {
            if(a[p]==1)
            {
                       count++;
                       cout<<p<<"    ";
            }
    }
    cout<<endl;
    cout<<count<<endl;
    getch();
    return 0;
}
