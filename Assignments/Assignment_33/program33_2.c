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
//  Function Name : CheckAlpha
//  Description : accept character from user and check whether it is capital alphabet or not(A-Z)
//  Input :     Bool
//  Output :                
//  Author : Pallavi Kishanrao Hivrale
//  Date :   28/11/25
//
////////////////////////////////////////////////////////////////////////

typedef int BOOL;
BOOL ChkCapital(char ch)
{
   if(ch>='A' && ch<='Z')
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

   bRet = ChkCapital(cValue);

   if(bRet == TRUE)
   {
      printf("it is capital alphabet");
   }
   else 
   {
      printf("it is not a capital alphabet");
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