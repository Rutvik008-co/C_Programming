// Accept N number from user and accept another number or check the frequency of that number

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
//  Description :   Check the frequency of given nubmer                        //
//  Input   :       int                                                        //
//  Output  :       int                                                        //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////


int Frequency(int A[], int iLength, int iNo)
{
    int iCount1 = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(A[iCnt]  == iNo)
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
    int iSize = 0, iCnt = 0, iRet = 0, iNo = 0;
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

    printf("Enter number for find the frequency : ");
    scanf("%d",&iNo);

    iRet = Frequency(ptr,iSize,iNo);

    printf("Frequency of %d is : %d",iNo,iRet);
    
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
//  Output   : Frequency of 33 is : 1                                          //    
//                                                                             //
//  Input2   : 11, 21, 51, 122, 101, 121, 11                                   //
//  Output   : Frequency of 11 is : 2                                          //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

