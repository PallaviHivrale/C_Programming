#include<stdio.h>

double SquareMeter(int iValue)
{
  double dSquareMeter = iValue * 0.0929;
  return dSquareMeter;
}

int main()
{
  int iValue = 0;
  double dRet = 0.0; 

  printf("Enter area in square feet: ");
  scanf("%d", &iValue);

  dRet = SquareMeter(iValue);

  printf("%d Square feet is %lf Square meters\n", iValue, dRet);

  return 0;
}
