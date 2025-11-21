// Accept N number from user and return the smallest number.

/*
    START
        Accept the N numbers from user and
        return the smallest value from that N number
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
//  Function Name : SmallValue                                                 //
//  Description :   Show the smallest Value                                    //
//  Input   :       int                                                        //
//  Output  :       int                                         m              //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

typedef int * IPTR;

int SmallValue(IPTR Arr, int iNo)
{
    int iCnt = 0, iSmall = 0;

    for(iCnt= 0; iCnt < iNo; iCnt++)
    {
        iSmall =  Arr[0];
        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    return iSmall;
}
/////////////////////////////////////////////////////////////////////////////////
// End of SmallValue                                                              //
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

    iRet = SmallValue(p,iSize);

    printf("The min value from the list = %d",iRet);

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
//          The min value from the list : 3                                    // 
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
//          The min value from the list : 12                                   //                                                                                                                      //
/////////////////////////////////////////////////////////////////////////////////
