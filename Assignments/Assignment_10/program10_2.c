#include<stdio.h>

double RectArea(float fwidth,float fheight)
{
  double area = fwidth*fheight;
  return area;
}

int main()
{
  float fValue1 = 0.0, fValue2 = 0.0;
  double dRet = 0.0;

  printf("Enter width :");
  scanf("%f", &fValue1);

  printf("Enter height :");
  scanf("%f", &fValue2);

  dRet = RectArea(fValue1, fValue2);

  printf("Area of a Rectangle is %lf",dRet);

  return 0;
}