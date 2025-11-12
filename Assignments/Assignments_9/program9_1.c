#include<stdio.h>

void Display(int iNo)
{
  int icnt = 0;
  int jcnt = 0;

  if(iNo<0)
  {
    iNo = -iNo;
  }

  for(icnt=1; icnt<=iNo; icnt++)
  {
    printf("*\t");
  }

  for(jcnt=1; jcnt<=iNo; jcnt++)
  {
    printf("#\t");
  }
  printf("\n");
}

int main()
{
  int iValue = 0;

  printf("Enter number:");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}