///////////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description : Accepts one numbers and print its even factor 
//  Input : int
//  Output : void
//  Author:Pallavi Kishanrao Hivrale
//  Date : 25/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
       iNo = -iNo;
    }
    for(i=2; i<= iNo; i+=2)
    {
        if(iNo % i == 0)
        {
            printf("%d\n",i);
        }
    }   
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}
