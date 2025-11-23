/*
    Accept number of row and number of column and dislay the below pattern

    Input   :   Row - 4
                Column - 4

    Output  :   A   B   C   D
                a   b   c   d
                A   B   C   D
                a   b   c   d
*/              

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    char ch1 = 'A',ch2 = 'a';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch1 = 65, ch2 = 97; j <= iCol; j++, ch1++, ch2++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch2);
            }
            else
            {
                printf("%c\t",ch1);
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