#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    bool bRet = false;
    int *iPtr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory");

        return -1;
    }

    printf("Enter %d elements : \n", iLength);
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the number to to find :");
    scanf("%d", &iValue);

    bRet = Check(iPtr,iLength, iValue);

    if(bRet == true)
    {
        printf("%d is present in the data", iValue);
    }
    else
    {
        printf("%d is not present in the data", iValue);
    }

    free(iPtr);
    
    return 0;
}