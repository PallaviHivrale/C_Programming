#include<stdio.h>

void print_odd_numbers(int limit)
{
    int iCnt =1;

    for(iCnt = 1; iCnt <= limit; iCnt+=2)
    {
        printf("%d\n",iCnt);
    }
}

// Time Complexity : O(N)

int main()
{
    int limit;

    printf("Enter number : ");

    scanf("%d",&limit);
    print_odd_numbers(limit);
    return 0;
}