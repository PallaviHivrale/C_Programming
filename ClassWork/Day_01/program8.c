/*
   Step1: understand the problem statement
   Step2: write the algorithm
   Step3: decide the programmming language
   Step4: write the program
   Step5: test the program

*/

/*
  Algorithm

  START
      Accept First number as No1
      Accept second number as No2
      perform Addition of No1 and No2
      Display the addition on screen
  STOP

*/
#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2;   //Business Logic
    return fSum;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f\n",fRet);

    return 0;
}