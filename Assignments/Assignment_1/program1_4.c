/////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : check
//  Description :  accept one number and check whether it is divisible by 5 or not
//  Input :  int 
//  Output : true, false
//  Author:Pallavi Kishanrao Hivrale
//  Date : 24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool check(int iNo)
{
    if((iNo % 5) == 0)
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
    scanf("%d",&iValue);

    bRet = check(iValue);

    if(bRet == true)
    {
        printf("Division by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}