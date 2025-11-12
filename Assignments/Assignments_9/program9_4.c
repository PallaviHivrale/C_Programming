#include<stdio.h>

int OddFactFactorial(int iNo)
{
  int icnt = 0;
  int iFact = 1;

  if(iNo<0)
  {
    iNo = -iNo;
  }

  for(icnt =1; icnt<=iNo; icnt+=2)
  {
    iFact = iFact*icnt;
  }
  return iFact;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :");
  scanf("%d", &iValue);

  iRet = OddFactFactorial(iValue);

  printf("odd Factorial of number is %d\n",iRet);

  return 0;
}