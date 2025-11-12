#include<stdio.h>

int Factorial(int iNo)
{
  int icnt =0;
  int iFact = 1;
 
  if(iNo < 0)
  {
    iNo = -iNo;
  }

  for(icnt=1; icnt<=iNo; icnt++)
  {
    iFact = iFact*icnt;
  }
  return iFact;

}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number:");
  scanf("%d", &iValue);

  iRet = Factorial(iValue);
  printf("Factorial of number is %d",iRet);

  return 0;
}