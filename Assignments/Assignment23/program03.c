/*Start

Read the number of elements iLength.

Allocate memory and read all array elements.

Read the number iValue to search.

Traverse the array from the last index toward 0:

If Arr[i] == iValue, return index i.

If no match is found, return -1.

Stop.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR ;

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iRet = -1;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            iRet = iCnt;
            break;
        }
    }
    return iRet;
}
int main()
{
    int iLength = 0, iCnt = 0, iValue = 0, iRet = 0;
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

    printf("Enter %d values : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }
    
    printf("Enter the number to find its last occurrence : ");
    scanf("%d", &iValue);

    iRet = LastOcc(iPtr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else 
    {
        printf("Last occurrence of number is at index %d",iRet);
    }

    free(iPtr);
    
    return 0;
}