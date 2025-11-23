/*
    Accept number of row and number of column and dislay the below pattern

    Input   :   Row - 4
                Column - 5

    Output  :   1   2   3   4   5
                2   3   4   5   6
                3   4   5   6   7
                4   5   6   7   8    
*/              

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNo = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, iNo = i; j <= iCol; j++, iNo++)
        {
            printf("%d\t",iNo);
        }
        printf("\n"); 
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