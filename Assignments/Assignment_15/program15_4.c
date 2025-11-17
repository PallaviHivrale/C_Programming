#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0, iMul = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 0;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo/10; 
    }
    return iMul;
}

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter number : "); 
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d", iRet);

    return 0;
}