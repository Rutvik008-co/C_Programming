// WAP which accept string from user and count the number of white spaces

#include<stdio.h>

int CheckSpace(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCount++;
        }    
        str++;
    }   
    return iCount;
       
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CheckSpace(Arr);

    printf("%d",iRet);

    return 0;
}


