// WAP which accept the string from user and convert it into lower case

#include<stdio.h>

void strlwrX(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            printf("%c",*str +32);
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

    strlwrX(Arr);

    return 0;
}


