// Accept N number from user and return difference between frequency of even number and odd numbers.

 /*
 Algorithm
    Start
        Accept the N number from user
        Return the difference between frequency Even and odd number
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
//  Function Name : Frequency                                                  //
//  Description :   Difference btn odd and even Frequency                      //
//  Input   :       int                                                        //
//  Output  :       int                                                        //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////


int Frequency(int A[], int iLength)
{
    int iCount1 = 0, iCount2 = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(A[iCnt] % 2 == 0)
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
    }

    if(iCount1 > iCount2)
    {
        return iCount1 - iCount2;
    }
    else
    {
        return iCount2 - iCount1;
    }
}
/////////////////////////////////////////////////////////////////////////////////
// End of Frequency                                                            //
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

    iRet = Frequency(ptr,iSize);
    
    printf("Difference between even and odd frequency %d", iRet);

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
//  Input1   : 32, 34, 21, 10, 27                                              //
//  Output   : Difference between even and odd frequency :  1                  //    
//                                                                             //
//  Input2   : 11, 21, 51, 122, 101, 121                                       //
//  Output   : Difference between even and odd frequency  : 4                  //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

