////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : Diffrence
//  Description : diffrence between frequency of small character
//                and frequency of capital character        
// 
//  Input  :   char*
//  Output :   int           
//  Author :   Pallavi Kishanrao Hivrale
//  Date   :   28/11/25
//
////////////////////////////////////////////////////////////////////////

int Diffrence(char *str)
{
   int iCountCapital = 0;
   int iCountSmall = 0;
   if(*str <0)
   {
      *str = -*str;
   }

   while(*str != '\0')
   {
      if((*str >= 'A') && (*str <= 'Z'))
      {
         iCountCapital++;
      }
      else if(*str >= 'a' && *str <= 'z')
      {
         iCountSmall++;
      }
      str++;
   }
   printf("number of small character : %d\n",iCountSmall);
   printf("number of Capital character : %d\n",iCountCapital);

   return iCountSmall - iCountCapital;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////

int main()
{
   char arr[20];
   int iRet = 0;

   printf("Enter string: ");
   scanf("%[^'\n']s", arr);

   iRet = Diffrence(arr);

   printf("%d",iRet);

   return 0;
}

////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input  :   Marvellous Muti OS
//  Output :   4
////////////////////////////////////////////////////////////////////////