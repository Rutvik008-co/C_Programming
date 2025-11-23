/*
    Accept number of row and number of column and dislay the below pattern

    Input   :   Row - 6
                Column - 5

    Output  :   1   2   3   4   5
                -1  -2  -3  -4  -5
                1   2   3   4   5
                -1  -2  -3  -4  -5
                1   2   3   4   5
                -1  -2  -3  -4  -5
*/              

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNo = 0;
    char ch = 'a';

    for(i = 1; i <= iRow; i++)
    {
        if((i % 2) == 0)
        {
            for(j = 1, iNo = -1; j <= iCol; j++, iNo--)
            {
                printf("%d\t",iNo);
            }
        }
        else
        {
            for(j = 1, iNo =1; j <= iCol; j++, iNo++)
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