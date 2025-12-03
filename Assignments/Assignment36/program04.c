// WAP which accept string from user and display the number from the string

#include<stdio.h>

void strnumX(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }    
        str++;
    }
       
}

int main()
{
    char Arr[20];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    strnumX(Arr);

    return 0;
}


