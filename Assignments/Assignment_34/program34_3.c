////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Accept character from user. 
//                If it is capital then display all the characters from the input characters till Z.
//                If input character is small then print all the characters in reverse order till a.
//                In other cases return directly.
// 
//  Input :    char
//  Output :   char              
//  Author : Pallavi Kishanrao Hivrale
//  Date :   28/11/25
//
////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
   if(ch >= 'A' && (ch <= 'Z'))
   {
      for(char c=ch; c<='Z'; c++)
      {
         printf("%c\t",c);
      }
   }
   else  if(ch>= 'a' && (ch<='z'))
   {
      for(char c= ch; c>='a'; c--)
      {
         printf("%c\t",c);
      }
   }
   else 
   {
      return;
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

   printf("Enter the character : \n");
   scanf("%c",&cValue);

   Display(cValue);
    
   return 0;
}

////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input  :   Q
//  Output :   Q R S T W X Y Z
//
//  Input  :   m
//  Output :   m l k j i h g f e d c b a
//
//  Input : 8
//  output :
//    
////////////////////////////////////////////////////////////////////////