////////////////////////////////////////////////////////
//
//  File Name : program29_2.c
//  Description :  pattern printing 
//
//  Input :  iRow = 5    iCol = 5
//  Output :    a   b   c   d   e
//              1   2   3   4   5
//              a   b   c   d   e
//              1   2   3   4   5
//              a   b   c   d   e
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
        if(i % 2 == 1)
        {
            char ch ='a';
            for(j=1; j<=iCol; j++)
            {
                printf("%c\t",ch);
                ch++;
            }
        }
        else
        {
            int Num = 1;
            for(j=1; j<=iCol; j++)
            {
                printf("%d\t",Num);
                Num++;
            }
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