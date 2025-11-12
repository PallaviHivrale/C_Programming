#include<stdio.h>

int KMtoMeter(int iNo)
{
  int Meter = iNo*1000;
  return Meter;
}

int main()
{
  int iValue = 0, iRet = 0; 

  printf("Enter distance :");
  scanf("%d", &iValue);

  iRet = KMtoMeter(iValue);

  printf("%d KM is %d meters ", iValue, iRet);

  return 0;
}