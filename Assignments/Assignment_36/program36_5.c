
////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigits
//  Description : accept string from user and count number of white spaces     
// 
//  Input  :   char*
//  Output :   int        
//  Author :   Pallavi Kishanrao Hivrale
//  Date   :   29/11/25
//
////////////////////////////////////////////////////////////////////////
int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    char arr[50];
    int iRet = 0;
    
    printf("Enter string : ");
    scanf("%[^'\n]s",arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces : %d\n",iRet);

    return 0;

}
////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input  :  Marvellous
//  Output :  0
//
//  Input  :  Marvellous Infosystems
//  Output :  1
//
//  Input  :  Marvellous Infosystem by Pallavi Hivrale
//  Output :  4
//
////////////////////////////////////////////////////////////////////////