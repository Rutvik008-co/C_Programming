// Accept N number from user and display all such numbers which contains 3 digit in it

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
//  Function Name : ThreeDigit                                                 //
//  Description :   Display Three Digit number                                 //
//  Input   :       int                                                        //
//  Output  :       int                                         m              //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

typedef int * IPTR;

void ThreeDigit(IPTR Arr, int iNo, int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt= 0; iCnt < iNo; iCnt++)
    {
       if(Arr[iCnt] > iNo1 && Arr[iCnt] < iNo2);
       {
            printf("%d",Arr[iCnt]);
       }
    }
}
/////////////////////////////////////////////////////////////////////////////////
// End of ThreeDigit                                                           //
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Entry point functon of the program                                         //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iSize = 0, iValue1 = 0, iValue2 = 0, iRet = 0;
    IPTR p = NULL;

    printf("Enter the Value : ");
    scanf("%d",&iSize);

    p = (IPTR)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the %d element : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the Start Value : ");
    scanf("%d",&iValue1);
    
    printf("Enter the End Value : ");
    scanf("%d",&iValue2);

    ThreeDigit(p,iSize,iValue1, iValue2);

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
