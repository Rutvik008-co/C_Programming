/*
    Accept number of row and number of column and dislay the below pattern

    Input   :   Row - 4
                Column - 4

    Output  :   A   A   A   A
                B   B   B   B
                C   C   C   C
                D   D   D   D
*/              

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    char ch1 = 'A';

    for(i = 1, ch1 = 65; i <= iRow; i++, ch1++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch1);
            
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