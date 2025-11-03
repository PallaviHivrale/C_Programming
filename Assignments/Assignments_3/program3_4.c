///////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description : Accepts one character and convert of that character 
//  Input : int
//  Output : void
//  Author:Pallavi Kishanrao Hivrale
//  Date : 25/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c",cValue -32);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c",cValue +32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
