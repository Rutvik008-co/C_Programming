/*
Start

Read number of elements (iLength).

Read all array elements.

Read starting value (iStart) and ending value (iEnd).

Traverse the array from index 0 to iLength - 1:

    If element is between iStart and iEnd:
        Display the element.

Stop.
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR ;

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]>= iStart && Arr[iCnt]<= iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0, iValue1 = 0,iValue2 = 0;
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
    
    printf("Enter the staring point : ");
    scanf("%d", &iValue1);

    printf("Enter the ending point : ");
    scanf("%d", &iValue2);

    Range(iPtr, iLength, iValue1, iValue2);

    free(iPtr);

    return 0;
}