#include <stdio.h>
#include <stdlib.h>
int alphanum(char str[]);
int main()
{
    char str[20];
    int i;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    switch(alphanum(str))
    {
        case 1: printf("Alphanumeric string"); break;
        case 0: printf("Not ALphanumeric string"); break;
    }


    return 0;
}
int alphanum(char str[])
{
    int i;
    for(i=0;str[i];i++)
     if(str[i]>=48&&str[i]<=57)
        return 1;
    else continue;
    return 0;
}
