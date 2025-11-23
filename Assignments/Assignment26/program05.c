
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iCount = 0;
    
    iCount = 2;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCount);
        iCount += 2;
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue1);

    Pattern(iValue1);


    return 0;
}