///////////////////////////////////////////////////////////////////////////
//
//  Function Name : DivisionTwoNumber
//  Description : it prints '*' on screen as per input number
//  Input : int
//  Output : void
//  Author: Pallavi Kishanrao Hivrale
//  Date : 25/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        print("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}