#include<stdio.h>

double CircleArea(float fRadius)
{
  double area = 3.14*fRadius*fRadius;
  return area;
  
}

int main()
{
  float fValue =0.0;
  double dRet = 0.0;

  printf("Enter radius :");
  scanf("%f", &fValue);

  dRet = CircleArea(fValue);

  printf("Area of a circle is %lf",dRet);

  return 0;
}