#include <stdio.h>
 
int count_factors(int number)
{
    int i=0, icount =0;
    if (number < 0)
    {
        number = -number;
    }

    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            icount++;
        }
    }
    return icount;
}

int main()
{
    int number;

    printf("Enter number: ");

    scanf("%d", &number);
    printf("%d\n",count_factors(number));

    return 0;
}
