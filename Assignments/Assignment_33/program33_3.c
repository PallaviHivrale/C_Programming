////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkDigit
//  Description : accept character from user and check whether it is digit or not
//  Input :     Bool
//  Output :                
//  Author : Pallavi Kishanrao Hivrale
//  Date :   28/11/25
//
////////////////////////////////////////////////////////////////////////

typedef int BOOL;
BOOL ChkDigit(char ch)
{
   if(ch>='0' && ch<='9')
   {
    return TRUE;
   }
   else 
   {
    return FALSE;
   }
   
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////

int main()
{
   char cValue = '\0';
   BOOL bRet = FALSE;

   printf("Enter the character : \n");
   scanf("%c",&cValue);

   bRet = ChkDigit(cValue);

   if(bRet == TRUE)
   {
      printf("it is digit");
   }
   else 
   {
      printf("it is not a digit");
   }

   return 0;
}

////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input/Output :    F-TRUE, d-FALSE               
//  
////////////////////////////////////////////////////////////////////////