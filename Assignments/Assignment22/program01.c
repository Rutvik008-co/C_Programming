 // Accept N number from user and return frequency of even numbers.

 /*
 Algorithm
    Start
        Accept the N number from user
        Return the frequency of Even number
    Stop
 */

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Required Header file                                                       //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Function Name : CountEven                                                  //
//  Description :   Count of even number                                       //
//  Input   :       int                                                        //
//  Output  :       int                                                        //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////


int CountEven(int A[], int iLength)
{
    int iCount = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(A[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}
/////////////////////////////////////////////////////////////////////////////////
// End of CountEven                                                            //
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Entry point functon of the program                                         //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of element : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountEven(ptr,iSize);
    
    printf("Result is %d", iRet);

    free(ptr);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////
// End of main                                                                 //
/////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Testcases successfully handled by the application                          //
//                                                                             //
//  Input1   : 32, 34, 21, 10, 27      Output  : Count of even numbers is : 3  //
//  Input2   : 11, 21, 51, 101, 121    Output  : Count of even numbers is : 0  //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

