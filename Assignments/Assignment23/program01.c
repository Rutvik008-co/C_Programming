// Accept N number from user nad accept one anotehr as No check whether No is present or not

/*
    Algorithm
        Start
            Accept the N values from user
            Accept the 1 another value from user and
            Check that value is present in it or not
        Stop
*/

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Required Header file                                                       //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

// Typedef
#include<stdio.h>
#include<stdlib.h>

// Define
#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Function Name : Check                                                  //
//  Description :   Count of even number                                       //
//  Input   :       int                                                        //
//  Output  :       int                                                        //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iLength, int No)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iCount++;
        }
    }
    if(iCount > 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

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

    printf("Enter the number to find in list : ");
    scanf("%d",&iValue);

    bRet = Check(p, iSize, iValue);

    if(bRet == 1)
    {
        printf("Yes, the %d is present in the list",iValue);
    }
    else
    {
        printf("No, the %d is not present in the list",iValue);
    }

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
//          Enter number of elements :5                                        //
//          Enter 5 element                                                    //
//          Enter 1st element : 1                                              //
//          Enter 2st element : 2                                              //
//          Enter 3st element : 3                                              //
//          Enter 4st element : 4                                              //
//          Enter 5st element : 5                                              //
//          Enter the number to find in list : 6                               //
//  Output :                                                                   //
//          No, the 6 is not present in the list                               //                                                         //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////
