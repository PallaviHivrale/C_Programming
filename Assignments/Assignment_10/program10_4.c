#include<stdio.h>

double FhtoCs(float fTemp)
{
  double Celsius = (fTemp - 32.0) * (5.0 / 9.0);
  return Celsius;
}

int main()
{
  float fValue = 0.0;
  double dRet = 0.0; 

  printf("Enter temperature in Fahrenheit: ");
  scanf("%f", &fValue);

  dRet = FhtoCs(fValue);

  printf("%.lf Fahrenheit is %lf Celsius\n", fValue, dRet);

  return 0;
}
