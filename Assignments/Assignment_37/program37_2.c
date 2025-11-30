
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
//  Function Name : DisplayDigits
//  Description : accept string from user and return freq of that character     
// 
//  Input  :   char*
//  Output :   int      
//  Author :   Pallavi Kishanrao Hivrale
//  Date   :   29/11/25
//
////////////////////////////////////////////////////////////////////////
int CountChar(char *str, char ch)
{
    int iCount = 0;   

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
   
}
////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue = 0;
    int iRet = 0;
    
    printf("Enter string : ");
    scanf("%[^'\n]s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(arr, cValue);

    printf("character frequency is %d",iRet);
    
    return 0;
}
////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input  :  Marvellous multi OS
//            M
//  Output :  2
//
//  Input  :  Marvellous Multi OS
//            W
//  Output :  0
//

//
////////////////////////////////////////////////////////////////////////