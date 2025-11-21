// Accept N number from user and return the difference between
// largest and smallest number.

/*
    START
        Accept the N numbers from user and
        return the difference between largest and smallest number
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
//  Function Name : Diff                                                       //
//  Description :   Diff between larg nad small value                          //
//  Input   :       int                                                        //
//  Output  :       int                                         m              //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

typedef int * IPTR;

int Diff(IPTR Arr, int iNo)
{
    int iCnt = 0, iSmall = 0, iMax = 0;

    for(iCnt= 0; iCnt < iNo; iCnt++)
    {
        iSmall =  Arr[0];
        iMax = Arr[0];

        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax - iSmall;
}
/////////////////////////////////////////////////////////////////////////////////
// End of Diff                                                                 //
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

    iRet = Diff(p,iSize);

    printf("The diff between max and min value = %d",iRet);

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
