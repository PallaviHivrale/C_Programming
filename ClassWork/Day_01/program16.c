//////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////

#include<stdio.h>               // For input Output
#include<stdbool.h>             // For bool Datatype

//////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   it is used to check even odd
//  Input :         Integer
//  Output :        Boolean
//  Author :        Pallavi kishanrao Hivrale
//  Date:           10/10/2025
//
//////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    { return true; }
    else
    { return false; }
}

//////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
//////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {  printf("%d is Even Number\n",iValue);  }
    else
    { printf("%d is Odd Number\n",iValue);    }

    return 0;
}