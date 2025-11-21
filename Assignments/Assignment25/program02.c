// Accept N number from user and display such element which divisible by 5

/*
    START
        Accept the N numbers from user and
        Check it is divisible by 5 or not
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
//  Function Name : Check                                                      //
//  Description :   Print the number which is divisible by 5                   //
//  Input   :       int                                                        //
//  Output  :       void                                                       //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       17/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

void Check(IPTR Arr, int iNo)
{
    int iCnt = 0, iCount1 = 0, iCount2 = 0, iValue = 0;

    for(iCnt = 0, iValue = 5; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt] % iValue == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////
// End of Check                                                                //
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Entry point functon of the program                                         //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iSize = 0;
    IPTR ptr = NULL;

    printf("Enter the value : ");
    scanf("%d",&iSize);

    ptr = (IPTR)malloc(iSize * sizeof(int));

    printf("Enter the %d element",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Check(ptr,iSize);

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
//          Enter 1st element : 40                                             //
//          Enter 2nd element : 12                                             //
//          Enter 3rd element : 20                                             //
//          Enter 4th element : 35                                             //
//  Output :                                                                   //
//          40  20  35                                                         // 
//                                                                             //                                                         
//  Input :                                                                    //
//          Enter number of elements : 6                                       //
//          Enter 6 element                                                    //
//          Enter 1st element : 11                                             //
//          Enter 2nd element : 20                                             //
//          Enter 3rd element : 27                                             //
//          Enter 4th element : 23                                             //
//          Enter 3rd element : 15                                             //                                            //
//          Enter 5th element : 125                                            //
//  Output :                                                                   //
//          20  15  25                                                         //                                                                                                                      //
/////////////////////////////////////////////////////////////////////////////////
