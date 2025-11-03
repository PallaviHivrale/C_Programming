///////////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintEvenFactor
//  Description : Accepts numbers and print its even factor of that number
//  Input : int
//  Output : void
//  Author:Pallavi Kishanrao Hivrale
//  Date : 25/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
       iNo = -iNo;
    }
    for(i=1; i<= iNo/2; i++)
    {
        if((iNo % i == 0) && (i % 2 ==0))
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

    DisplayEvenFactor(iValue);

    return 0;
}
