////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplaySchedule
//  Description : accept character from user and check whether it is small case or not
//  Input :     Bool
//  Output :                
//  Author : Pallavi Kishanrao Hivrale
//  Date :   28/11/25
//
////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
   chDiv = toupper(chDiv);

   switch(chDiv)
   {
      case 'A':
      {
         printf("Your exam is at 7:00 AM\n");
         break;
      }
      case 'B':
      {
         printf("Your exam is at 8:30 AM\n");
         break;
      }
      case 'C':
      {
         printf("Your exam is at 9:20 AM\n");
         break;
      }
      case 'D':
      {
         printf("Your exam is at 10:30 AM\n");
         break;
      }
      default:
      {
         printf("Invalid division! Please enter A, B, C, or D.\n");
         break;
      }
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

   printf("Enter the division : \n");
   scanf("%c",&cValue);

   DisplaySchedule(cValue);

   return 0;
}

////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input/Output :    g-TRUE, D-FALSE               
//  
////////////////////////////////////////////////////////////////////////