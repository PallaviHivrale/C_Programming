///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description :  Accept one number from the user and print that number of * on the screen
//  Input :   int
//  Output : print * iNo times
//  Author:Pallavi Kishanrao Hivrale
//  Date : 24/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt <=iNo; icnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}