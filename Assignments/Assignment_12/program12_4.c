#include <stdio.h>
 
int sum_of_even_factors(int number)
{
    int i=0, iSum=0;
    if (number < 0)
    {
        number = -number;
    }

    for (i = 2; i <= number; i+=2)
    {
        if (number % i == 0)
        {
            iSum = iSum+i;
        }
    }
    return iSum;
}

int main()
{
    int number;

    printf("Enter number: ");

    scanf("%d", &number);
    printf("%d\n",sum_of_even_factors(number));

    return 0;
}