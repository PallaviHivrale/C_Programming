////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : It is used to print patterns on screen 
//  Input :     Integer 
//  Output :        $ * * * *
//                  * $ * * *
//                  * * $ * *
//                  * * * $ *
//                  * * * * $
//  Author : Pallavi Kishanrao Hivrale
//  Date :   22/11/25
//
////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j =0;

    if(iRow != iCol)
    {
        printf("Invalid input\n");
        printf("row number and coloumn number should be same\n");

        return;
    }

    for(i=1; i<=iRow; i++)
    {          
        for(j=1; j<=iCol; j++)
        {
            if(i==j)
            {
            printf("$\t");
            }
            else 
            {
            printf("*\t");
            }
                
        }
        printf("\n");
    }
}


////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and coloumns:");
    scanf("%d%d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by application
//
//  Input: 4
//
//  Output :        * * * *
//                  * * * # 
//                  * * # # 
//                  * # # #
//  
////////////////////////////////////////////////////////////////////////