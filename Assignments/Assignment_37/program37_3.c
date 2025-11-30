
////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstChar
//  Description : accept one charcter return index of first occurance 
//                 of that character     
// 
//  Input  :   char*
//  Output :   int       
//  Author :   Pallavi Kishanrao Hivrale
//  Date   :   29/11/25
//
////////////////////////////////////////////////////////////////////////
int FirstChar(char *str, char ch)
{
    int iCount = 0; 
     

    while(str[iCount] != '\0')
    {
        if(str[iCount] == ch)
        {
            return iCount;          // return index
        }
        iCount++;
    }
    return -1;  // character not found
   
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

    iRet = FirstChar(arr, cValue);

    printf("character location is %d",iRet);
    
    return 0;
}
////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input  :  Marvellous multi OS
//            M
//  Output :  0
//
//  Input  :  Marvellous Multi OS
//            w
//  Output :  -1
//

//
////////////////////////////////////////////////////////////////////////