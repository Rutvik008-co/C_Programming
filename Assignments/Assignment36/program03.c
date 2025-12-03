// WAP which accept string from user and convert the toggle the case

#include<stdio.h>

void strtogleX(char *str)
{
    
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            printf("%c",*str - 32);
        }    
        else if(*str >= 'A' && *str <= 'Z')
        {
            printf("%c",*str + 32);
        }   
        str++;
    }
       
}

int main()
{
    char Arr[20];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    strtogleX(Arr);

    return 0;
}


