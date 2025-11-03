///////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Accepts a number from user and print msg on screen
//  Input : int
//  Output : void
//  Author:Pallavi Kishanrao Hivrale
//  Date : 25/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
    printf("Hello\n");
    }
    else
    {
    printf("Demo\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

