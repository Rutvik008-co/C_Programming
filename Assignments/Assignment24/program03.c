#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR ;

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0, iMin = 0, iDiff = 0;

    for(iMin = Arr[0], iMax = Arr[0], iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    iDiff = iMax - iMin;
    
    return iDiff;
}
int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
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

    iRet = Difference(iPtr, iLength);

    printf("The difference between largest and smallest number is %d\n", iRet);

    free(iPtr);

    return 0;
}