// Accept N number from user and return frequency of 11 from it.

 /*
 Algorithm
    Start
        Accept the N number from user
        Calculate the frequency of 11
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
//  Description :   Check it contain 11 or not                                 //
//  Input   :       int                                                        //
//  Output  :       int                                                        //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////


int Frequency(int A[], int iLength)
{
    int iCount1 = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(A[iCnt]  == 11)
        {
            iCount1++;
        }
    }
    return iCount1;
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
    int iSize = 0, iCnt = 0, iRet = 0;
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

    printf("Frequency of 11 is : %d",iRet);
    
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
//  Input1   : 22, 33, 44, 55, 66                                              //
//  Output   : Frequency of 11 is : 0                                          //    
//                                                                             //
//  Input2   : 11, 21, 51, 122, 101, 121                                       //
//  Output   : Frequency of 11 is : 1                                          //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

