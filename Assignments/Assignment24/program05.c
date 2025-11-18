#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR ;

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0, iDigit = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        int iNo = Arr[iCnt];
        iSum = 0;

        while(iNo != 0)
        {
            iDigit =  iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("The sum of digits of %d is %d \n",Arr[iCnt],iSum);
    }
        
}
int main()
{
    int iLength = 0, iCnt = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements :");
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }

    printf("Enter %d the values : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    DigitsSum(iPtr, iLength);

    free(iPtr);

    return 0;
}