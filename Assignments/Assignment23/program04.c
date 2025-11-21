// Accept N numbers from user and accept Range, Display all elements from that range


/*
    Algorithm
        Start
            Accept the N values from user
            Accept the 1 another value from user and
            print range between tow numbers
        Stop
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
//  Function Name : Range                                                      //
//  Description :   first occurance of the No                                  //
//  Input   :       int                                                        //
//  Output  :       void                                                       //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iNo1 && Arr[iCnt] < iNo2)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////
// End of Range                                                                //
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Entry point functon of the program                                         //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter range : ");
    scanf("%d %d",&iValue1,&iValue2);

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

    Range(p, iSize, iValue1,iValue2);

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
//          Enter range : 3                                                    //
//          5                                                                  //
//          Enter 4 element                                                    //
//          Enter 1st element : 1                                              //
//          Enter 2nd element : 2                                              //
//          Enter 3rd element : 3                                              //
//          Enter 4th element : 4                                              //
//          Enter 5th element : 5                                              //
//  Output :                                                                   //
//          3   4                                                              //                                                         
//  Input :                                                                    //
//          Enter number of elements : 5                                       //
//          Enter number : 60                                                  //
//          90                                                                 //
//          Enter 5 element                                                    //
//          Enter 1st element : 60                                             //
//          Enter 2nd element : 70                                             //
//          Enter 3rd element : 80                                             //
//          Enter 4th element : 90                                             //
//          Enter 5th element : 100                                            //
//  Output :                                                                   //
//          70  80                                                             //                                                                                                                      //
/////////////////////////////////////////////////////////////////////////////////
