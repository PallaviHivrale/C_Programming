#include<stdio.h>

int CountDiff(int iNo)
{
    int iSumEven = 0, iSumOdd = 0, iDigit=0;

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
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo / 10;
    }  
    return iSumEven-iSumOdd;
}
    
int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter number : "); 
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}