#include<stdio.h>

void print_even_numbers(int limit)
{
    int iCnt =2;

    for(iCnt = 2; iCnt <= limit; iCnt+=2)
    {
        printf("%d\n",iCnt);
    }
}

// Time Complexity : O(N/2)

int main()
{
    int limit;

    printf("Enter number : ");

    scanf("%d",&limit);
    print_even_numbers(limit);
    return 0;
}