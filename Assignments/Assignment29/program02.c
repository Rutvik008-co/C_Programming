/*
    Accept number of row and number of column and dislay the below pattern

    Input   :   Row - 4
                Column - 4

    Output  :   2   4   6   8
                1   3   5   7
                2   4   6   8
                1   3   5   7
*/              


#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNo = 0;

    
    for(i = 0; i < iRow; i++)
    {
        if((i % 2) == 0)
        {
            for(j = 1, iNo = 2; j <= iCol; j++, iNo += 2)
            {
                printf("%d\t",iNo);
            }                
        }
        else
        {
            for(j = 1, iNo = 1; j <= iCol; j++, iNo += 2)
            {
                printf("%d\t",iNo);
            }
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