// Accept N numbers from user and return product of all odd elements.

/*
    Algorithm
        Start
            Accept the N values from user and
            return product of all odd elements.
        Stop
*/

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Required Header file                                                       //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Function Name : Range                                                      //
//  Description :   Product of all odd elements                                //
//  Input   :       int                                                        //
//  Output  :       int                                                        //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

typedef int * IPTR ;

int Product(int Arr[], int iLength)
{
    int iCnt = 0, product = 1;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            product = product * Arr[iCnt];
            bFlag = true;
        }
    }
    if(bFlag == false)
    {
        product = 0;
    }

    return product;
}

/////////////////////////////////////////////////////////////////////////////////
// End of Product                                                              //
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Entry point functon of the program                                         //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    IPTR p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (IPTR)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d element \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %dst element : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet =  Product(p, iSize);

    printf ("The Product of all Odd elements is : %d",iRet);

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
//          Enter number of elements : 5                                       //            //
//          Enter 5 element                                                    //
//          Enter 1st element : 13                                             //
//          Enter 2nd element : 12                                             //
//          Enter 3rd element : 2                                              //
//          Enter 4th element : 3                                              //
//          Enter 5th element : 8                                              //
//  Output :                                                                   //
//          The Product of all Odd elements is : 39                            // 
//                                                                             //                                                         
//  Input :                                                                    //
//          Enter number of elements : 5                                       //
//          Enter 5 element                                                    //
//          Enter 1st element : 12                                             //
//          Enter 2nd element : 44                                             //
//          Enter 3rd element : 56                                             //
//          Enter 4th element : 90                                             //
//          Enter 5th element : 128                                            //
//  Output :                                                                   //
//          The Product of all Odd elements is : 39                            //                                                                                                                      //
/////////////////////////////////////////////////////////////////////////////////
