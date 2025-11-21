// Accept N number from user check whether that numbers contain 11 in it or not.

 /*
 Algorithm
    Start
        Accept the N number from user
        Check in the given numver it contain 11 or not
    Stop
 */

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Required Header file                                                       //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//  Function Name : Check                                                      //
//  Description :   Check it contain 11 or not                                 //
//  Input   :       int                                                        //
//  Output  :       bool                                                       //
//  Author  :       Rutvik Bibhishan Kamble                                    //
//  Date    :       16/11/2025                                                 //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////


bool Check(int A[], int iLength)
{
    int iCount1 = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(A[iCnt]  == 11)
        {
            iCount1++;
            break;
        }
    }
    if(iCount1 > 0)
    {
        return true;
    }
    else
    {
        return false;    
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
    int iSize = 0, iCnt = 0;
    bool bRet = false;
    int *ptr = NULL;

    printf("Enter number of element : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check(ptr,iSize);

    if(bRet == true)
    {
        printf("Yes, 11 is there");
    }
    else
    {
        printf("No, 11 is not there");
    }
    
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
//  Input1   : 22, 33, 44, 55, 66                                              //
//  Output   : No, 11 is not there                                             //    
//                                                                             //
//  Input2   : 11, 21, 51, 122, 101, 121                                       //
//  Output   : Yes, 11 is there                                                //
//                                                                             //
/////////////////////////////////////////////////////////////////////////////////

