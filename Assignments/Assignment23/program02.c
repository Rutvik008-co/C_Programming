// Accept N numbers from user and accept one another number as No,
// return index of first occurance of the No.

/*
    Algorithm
        Start
            Accept the N values from user
            Accept the 1 another value from user and
            Return index of first occurance of the No
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
#define FALSE -1

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Function Name : FirstOcc                                                   //
//  Description :   first occurance of the No                                  //
//  Input   :       int                                                        //
//  Output  :       int                                                        //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////
// End of FirstOcc                                                             //
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

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter number : ");
    scanf("%d",&iValue);

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

    iRet = FirstOcc(p, iSize, iValue);

    if(iRet > 0)
    {
        printf("1");
    }
    else
    {
        printf("-1");
    }
    
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
//          Enter number : 3                                                   //
//          Enter 4 element                                                    //
//          Enter 1st element : 1                                              //
//          Enter 2st element : 2                                              //
//          Enter 3st element : 3                                              //
//          Enter 4st element : 6                                              //
//  Output :                                                                   //
//          1                                                                  //                                                         
//  Input :                                                                    //
//          Enter number of elements : 4                                       //
//          Enter number : 3                                                   //
//          Enter 4 element                                                    //
//          Enter 1st element : 1                                              //
//          Enter 2st element : 2                                              //
//          Enter 3st element : 4                                              //
//          Enter 4st element : 6                                              //
//  Output :                                                                   //
//          -1                                                                  //                                                                                                                      //
/////////////////////////////////////////////////////////////////////////////////
