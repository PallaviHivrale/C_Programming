/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description : Accepts one character from user & check the character is vowel or not
//  Input : int
//  Output : void
//  Author:Pallavi Kishanrao Hivrale
//  Date : 25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char cValue)
{
    if(cValue=='a' || cValue=='e' || cValue=='i' || cValue=='o' || cValue=='u' ||
       cValue=='A' || cValue=='E' || cValue=='I' || cValue=='O' || cValue=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}
