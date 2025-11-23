////////////////////////////////////////////////////////
//
//  File Name : program28_3.c
//  Description :  pattern printing 
//
//  Input :  iRow = 3    iCol = 5
//  Output :    A   A   A   A   A
//              B   B   B   B   B
//              C   C   C   C   C
//  Author : Pallavi Kishanrao Hivrale
//  Date :   21/11/25
//
////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0; 
    char ch = 'A'; 

    for(i=1; i<= iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            printf("%c\t",ch);  
        }
        ch++;
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