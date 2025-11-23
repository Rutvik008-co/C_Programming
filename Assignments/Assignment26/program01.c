// Input    :   6
// Output   :   A   B   C   D   E   F

#include<stdio.h>

Pattern(iNo)
{
    int iCnt = 0;
    char ch = 0;

    ch = 'A';
    for(iCnt = 0; iCnt < iNo;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter the value : ");
    scanf("%d",&iValue1);

    Pattern(iValue1);


    return 0;
}