/*
    Accept number of row and number of column and dislay the below pattern

    Input   :   Row - 4
                Column - 4

        Output  :   1   2   3   4
                    1   *   *   4
                    1   *   *   4  
                    1   2   3   4
                    
*/   

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNo = 0;

    iNo = iCol;
    if(iRow == iCol)
    {
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == 1 || i == iRow || j == 1 || j == iCol)
                {
                    printf("%d\t",j);
                }
                else
                {
                    printf("*\t");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Can not be print!");
        return -1;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Row : ");
    scanf("%d",&iValue1);

    printf("Enter htte number of Column : ");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}