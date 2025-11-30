////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0
////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial
//  Description : Accept character from user and check it is special
//                symbol or not(!,@,#,$,%,^,&,*)
// 
//  Input :    char
//  Output :   BOOL            
//  Author : Pallavi Kishanrao Hivrale
//  Date :   28/11/25
//
////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
   if(ch == '!' || ch == '@' || ch == '#' || ch =='$' ||
      ch =='%' || ch == '^' || ch == '&' || ch =='*')
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

   bRet = ChkSpecial(cValue);

   if(bRet == TRUE)
   {
      printf("it is special character");
   }
   else 
   {
      printf("it is not a special character");
   }
    
   return 0;
}

////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input  :   %
//  Output :   TRUE
//
//  Input  :   d
//  Output :   FALSE

//    
////////////////////////////////////////////////////////////////////////