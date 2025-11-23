////////////////////////////////////////////////////////
//
//  File Name : program28_2.c
//  Description :  pattern printing 
//
//  Input :  iRow = 4    iCol = 4
//  Output :    A   B   C   D
//              a   b   c   d
//              A   B   C   D
//              a   b   c   d
//  Author : Pallavi Kishanrao Hivrale
//  Date :   21/11/25
//
////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;  

    for(i=1; i<= iRow; i++)
    {
        char ch;
        
        if(i % 2 != 0)
        {
            ch ='A';
        }
        else
        {
           ch = 'a';
        }

        for(j=1; j<=iCol; j++)
        {
            printf("%c\t",ch);
            ch++;  
        }
        printf("\n");
    }
}
 
int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of Rows and coloumns:");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}