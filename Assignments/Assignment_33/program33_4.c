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
//  Function Name : ChkSmall
//  Description : accept character from user and check whether it is small case or not
//  Input :     Bool
//  Output :                
//  Author : Pallavi Kishanrao Hivrale
//  Date :   28/11/25
//
////////////////////////////////////////////////////////////////////////

typedef int BOOL;
BOOL ChkSmall(char ch)
{
   if(ch>='a' && ch<='z')
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

   bRet = ChkSmall(cValue);

   if(bRet == TRUE)
   {
      printf("it is small case character");
   }
   else 
   {
      printf("it is not a small case character");
   }

   return 0;
}

////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input/Output :    g-TRUE, D-FALSE               
//  
////////////////////////////////////////////////////////////////////////