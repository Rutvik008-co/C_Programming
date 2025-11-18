/*
Start

Read the number of elements (iLength).

Read all elements into the array.

Set iProduct = 1 and flag = false.

For each element in the array:

If the element is odd, multiply it into iProduct and set flag = true.

If no odd element was found (flag == false), set iProduct = 0.

Print/return iProduct.

Stop.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR ;

int Product(int Arr[], int iSize)
{
    int iCnt = 0, iProduct = 1;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * Arr[iCnt]; 
            bFlag = true;   
        }
    }
    if(bFlag == false)
    {
        iProduct = 0;
    }

    return iProduct;
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

    iRet = Product(iPtr, iLength);

    printf("The product of all odd elements is %d\n", iRet);

    free(iPtr);

    return 0;
}