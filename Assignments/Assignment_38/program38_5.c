
////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpySmall
//  Description :string by converting all capital character into small case     
// 
//  Input  :   char*
//  Output :   void      
//  Author :   Pallavi Kishanrao Hivrale
//  Date   :   30/11/25
//
////////////////////////////////////////////////////////////////////////
void StrCpyToggle(char *src, char *dest)
{
    while(*src !='\0')
    {
        if(*src >= 'a' && (*src <= 'z')) 
        {
            *dest = *src - 32;
        }
        else if(*src >= 'A' && (*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else 
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';

}
////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];           

    StrCpyToggle(arr, brr);

    printf("%s",brr);
    
    return 0;
}
////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input :  Marvellous Python 2
//  Output:  mARVELLOUS pYTHON 2
// 
//
////////////////////////////////////////////////////////////////////////