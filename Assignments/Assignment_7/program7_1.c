#include<stdio.h>

void Pattern(int iNo)

{
    int icnt = 0;
    if(iNo<0)           //updator
    {
        iNo = -iNo;
    }

    for(icnt=0; icnt<iNo; icnt++)
    {
        printf("$");
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
