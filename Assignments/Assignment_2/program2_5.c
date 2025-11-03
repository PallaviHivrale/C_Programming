///////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Accepts two numbers and print the first number
//  Input : int, int
//  Output : void
//  Author:Pallavi Kishanrao Hivrale
//  Date : 25/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    //Display Result

    return 0;
}