
/*
  Algorithm

  START
      Accept First number as No1
      Accept second number as No2
      If the input is negative then convert it into positive
      perform Addition of No1 and No2
      Display the addition on screen
  STOP

*/

/////////////////////////////////////////////////////////////
//
// Rqeuired Header Files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Pallavi Kishanrao Hivrale
//  Date:           09/10/2025
//
/////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,             // First Input
                            float fNo2              // Second input
                        )
{
    float fSum = 0.0f;                              // To store the result

                                                    
    if(fNo1 < 0.0f)                                 // updator
    {
        fNo1 = -fNo1;
    }
    if(fNo2 < 0.0f)                                 // updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                             //Business Logic
    return fSum;
}  // End of AdditionTwoNumbers

/////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;            // To accept user input
    float fRet = 0.0f;                               // TO Store the result

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);      // Method call

    printf("Addition is : %f\n",fRet);

    return 0;
}  // End of  main

/////////////////////////////////////////////////////////////
//
//Testcasr sucessfully handled by the application
//
//  Input 1 :  10.5      Input 2 :  3.2      output : 13.7
//  Input 1 : -10.5      Input 2 :  3.2      output : 13.7
//  Input 1 :  10.5      Input 2 : -3.2      output : 13.7
//  Input 1 : -10.5      Input 2 : -3.2      output : 13.7
//  Input 1 :  10.5      Input 2 :  0.0      output : 10.5
//
/////////////////////////////////////////////////////////////