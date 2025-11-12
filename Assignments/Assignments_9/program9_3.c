#include<stdio.h>

int EvenFactorial(int iNo)
{
  int icnt=0, iFact=1;

  if(iNo<0)
  {
    iNo = -iNo;
  }

  for(icnt =2; icnt<=iNo; icnt+=2)
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

  iRet = EvenFactorial(iValue);

  printf("Even Factorial of number is %d",iRet);

  return 0;
}