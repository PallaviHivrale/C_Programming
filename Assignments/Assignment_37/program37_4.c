
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
int LastChar(char *str, char ch)
{
    int firstCount = 0; 
    int lastCount = -1;  

    while(str[firstCount] != '\0')
    {
        if(str[firstCount] == ch)
        {
            lastCount = firstCount;          // return index
        }
        firstCount++;
    }
    return lastCount;  // character not found
   
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

    iRet = LastChar(arr, cValue);

    printf("character location is %d",iRet);
    
    return 0;
}
////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input  :  Marvellous multi OS
//            w
//  Output :  -1
//
//  Input  :  Marvellous Multi OS
//            e
//  Output :  4
//

//
////////////////////////////////////////////////////////////////////////