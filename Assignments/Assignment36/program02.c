// WAP which accept the string from user and convert it into upper case

#include<stdio.h>

void struprX(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            printf("%c",*str - 32);
        }    
        else
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

    struprX(Arr);

    return 0;
}


