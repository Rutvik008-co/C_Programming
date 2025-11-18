#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0, iCountEven = 0, iCountOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iCountEven++;
        }
        else 
        {
            iCountOdd++;
        }
    }
    return iCountEven-iCountOdd;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)
    {
        printf("Unable to allocate the memory");

        return -1;
    }

    printf("Enter %d elements : \n", iLength);
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr,iLength);

    printf("Difference between freqency of even numbers and odd numbers is : %d ",iRet);

    free(ptr);
    
    return 0;
}