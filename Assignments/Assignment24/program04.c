#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR ;

int Digits(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("The numbers which contains 3 digits : ");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]>=100 && Arr[iCnt]<=999 ||
           Arr[iCnt]<=-100 && Arr[iCnt]>=-999)
           {
            printf("%d\t", Arr[iCnt]);
           }

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

    Digits(iPtr, iLength);

    free(iPtr);

    return 0;
}