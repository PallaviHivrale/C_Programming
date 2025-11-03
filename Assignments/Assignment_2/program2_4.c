///////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Accepts two numbers and print the first number, 
                //second number of times on screen
//  Input : int, int
//  Output : void
//  Author:Pallavi Kishanrao Hivrale
//  Date : 25/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    //  write updator
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d", iNo);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);


    return 0;
}