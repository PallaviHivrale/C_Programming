///////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   print number from five to one on the screen
//  Input :   
//  Output : number from 5 to 1
//  Author:Pallavi Kishanrao Hivrale
//  Date : 24/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
}
   
int main()
{
    Display();
    return 0;
}