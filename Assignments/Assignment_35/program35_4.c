////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description : check whether string contain vowels or not       
// 
//  Input  :   char*
//  Output :   BOOL        
//  Author :   Pallavi Kishanrao Hivrale
//  Date   :   29/11/25
//
////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
   while(*str != '\0')
   {
      if((*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u' ||
         *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'))
      {
         return TRUE;
      }
    
      str++;
   }
   return FALSE;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////

int main()
{
   char arr[20];
   BOOL bRet = FALSE;

   printf("Enter string: ");
   scanf("%[^'\n']s", arr);

   bRet = ChkVowel(arr);
   if(bRet == TRUE)
   {
      printf("contains Vowel");
   }
   else
   {
      printf("there is no vowel");
   }

   return 0;
}

////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input  :  marvellous
//  Output :  TRUE
//  Input  :  Demo
//  output :  TRUE
//  Input  :  xyz
//  output :  FALSE
//
////////////////////////////////////////////////////////////////////////