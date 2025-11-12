#include<stdio.h>

int FactorialDiff(int iNo)
{
  int icnt = 0;
  int iEvenFact = 1, iOddFact = 1;

  if(iNo<0)
  {
    iNo = -iNo;
  }

  for(icnt=2; icnt<=iNo; icnt+=2)
  {
    iEvenFact*=icnt;
  }

  for(icnt=1; icnt<=iNo; icnt+=2)
  {
    iOddFact*=icnt;
  }

  return(iEvenFact-iOddFact);
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :");
  scanf("%d", &iValue);

  iRet = FactorialDiff(iValue);

  printf("Factorial diffrence is %d",iRet);

  return 0;
}