// Accept N number from user and return difference between summation of  
// even element and summation of odd elements.

/*
    START
        Accept the N numbers from user and
        display the difference between summatio of odd and even number
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Required Header file                                                       //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Function Name : DiffOddEven                                                //
//  Description :   Display difference btn sum of odd and even number          //
//  Input   :       int                                                        //
//  Output  :       int                                                        //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       17/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

int DiffOddEven(IPTR Arr, int iNo)
{
    int iCnt = 0, iCount1 = 0, iCount2 = 0, iValue = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount1 = iCount1 + Arr[iCnt];
        }
        else
        {
            iCount2 = iCount2 + Arr[iCnt];
        }
    }
    iValue = iCount1 - iCount2;
    
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    return iValue;
}
/////////////////////////////////////////////////////////////////////////////////
// End of SumDigit                                                             //
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Entry point functon of the program                                         //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iSize = 0, iRet = 0;
    IPTR ptr = NULL;

    printf("Enter the value : ");
    scanf("%d",&iSize);

    ptr = (IPTR)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = DiffOddEven(ptr,iSize);

    printf("The difference of summation of odd and even values is : %d",iRet);

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
//  Input :                                                                    //
//          Enter number of elements : 4                                       //            //
//          Enter 4 element                                                    //
//          Enter 1st element : 13                                             //
//          Enter 2nd element : 12                                             //
//          Enter 3rd element : 2                                              //
//          Enter 4th element : 3                                              //
//  Output :                                                                   //
//          The diff between sum of odd and even number : 1                    // 
//                                                                             //                                                         
//  Input :                                                                    //
//          Enter number of elements : 6                                       //
//          Enter 5 element                                                    //
//          Enter 1st element : 11                                             //
//          Enter 2nd element : 22                                             //
//          Enter 3rd element : 27                                             //
//          Enter 4th element : 23                                             //
//          Enter 3rd element : 19                                             //                                            //
//          Enter 5th element : 128                                            //
//  Output :                                                                   //
//          The diff between sum of odd and even number : 70                   //                                                                                                                      //
/////////////////////////////////////////////////////////////////////////////////
