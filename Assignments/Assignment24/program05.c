// Accept N numbers from user and display summatio nof digits of each number

/*
    START
        Accept the N numbers from user and
        display such number which contain 3 digit in it
    STOP
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
//  Function Name : SumDigit                                                   //
//  Description :   Display Sum of Digit                                       //
//  Input   :       int                                                        //
//  Output  :       int                                         m              //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

typedef int * IPTR;

void SumDigit(IPTR Arr, int iNo)
{
    int iCnt = 0, iDigit = 0, iSum = 0;

    for(iCnt= 0; iCnt < iNo; iCnt++)
    {
        while (iCnt+1 > 0)
        {
            iDigit = Arr[iCnt] % 10;

            iSum = iSum + iDigit;

            Arr[iCnt] = Arr[iCnt] /10;
        }
        printf("Sum of digit of %d : %d",Arr[iCnt], iSum);
    }
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
    IPTR p = NULL;

    printf("Enter the Value : ");
    scanf("%d",&iSize);

    p = (IPTR)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the %d element : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    SumDigit(p,iSize);

    free(p);

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
//          The diff between max and min value : 10                            // 
//                                                                             //                                                         
//  Input :                                                                    //
//          Enter number of elements : 6                                       //
//          Enter 5 element                                                    //
//          Enter 1st element : 12                                             //
//          Enter 2nd element : 44                                             //
//          Enter 3rd element : 56                                             //
//          Enter 4th element : 90                                             //
//          Enter 3rd element : 44                                             //                                            //
//          Enter 5th element : 128                                            //
//  Output :                                                                   //
//          The diff between max and min value : 116                           //                                                                                                                      //
/////////////////////////////////////////////////////////////////////////////////
