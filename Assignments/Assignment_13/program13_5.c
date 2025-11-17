#include<stdio.h>

int sum_even_numbers(int limit)
{
    int iCnt =0, iSum = 0;

    for(iCnt = 2; iCnt <= limit; iCnt+=2)
    {
        iSum = iSum +iCnt;
    }
    return iSum;
}

// Time Complexity : O(N)

int main(void)
{
    int limit;
    printf("Enter number : ");

    scanf("%d",&limit);
    printf("%d\n", sum_even_numbers(limit));
    return 0;
}