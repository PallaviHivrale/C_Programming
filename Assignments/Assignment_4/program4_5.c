#include<stdio.h>

int FactDiff(int iNo)
{
    int SumFact = 0;
    int SumNonFact = 0;

    for(int i=0; i<iNo; i++)
    {
        if(iNo % i == 0)
            SumFact += i;
        else
            SumNonFact +=iNo;
            return(SumFact-SumNonFact);
    }
}

int main()
{
int iValue = 0;

int iRet = 0;

printf("Enter number\n");

scanf("%d", &iValue);

iRet = FactDiff(iValue);

printf("%d", iRet);

return 0;

}