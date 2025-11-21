// Accept N numbers from user and accept one another number asNo, 
// return index of list occerance of that No.

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
#define FALSE -1

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Function Name : LastOcc                                                  //
//  Description :   Count of even number                                       //
//  Input   :       int                                                        //
//  Output  :       int                                                        //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount1 = 0, iCount2 = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
    }
    return iCount1 - iCount2;
}

/////////////////////////////////////////////////////////////////////////////////
// End of LastOcc                                                              //
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

    iRet = LastOcc(p, iSize, iValue);

    if(iRet < 0)
    {
        iRet = -iRet;
    }

    printf("%d",iRet);
    
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
//          Enter number : 3                                                   //
//          Enter 4 element                                                    //
//          Enter 1st element : 1                                              //
//          Enter 2nd element : 2                                              //
//          Enter 3rd element : 3                                              //
//          Enter 4th element : 6                                              //
//          Enter 5th element : 6                                              //
//  Output :                                                                   //
//          3                                                                  //                                                         
//  Input :                                                                    //
//          Enter number of elements : 4                                       //
//          Enter number : 3                                                   //
//          Enter 4 element                                                    //
//          Enter 1st element : 1                                              //
//          Enter 2st element : 3                                              //
//          Enter 3st element : 4                                              //
//          Enter 4st element : 6                                              //
//  Output :                                                                   //
//          2                                                                  //                                                                                                                      //
/////////////////////////////////////////////////////////////////////////////////
