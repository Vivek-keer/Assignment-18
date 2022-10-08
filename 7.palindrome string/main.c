#include <stdio.h>
#include <stdlib.h>
int palindrome(char str[],int);

int main()
{
    char str[20]; int i;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    switch(palindrome(str,i))
    {
        case 0: printf("Not palindrome"); break;
        case 1: printf("Palindrome"); break;
    }
    return 0;
}

int palindrome(char str[],int i)
{

    char temp[20]={}; int x;

    for(x=0,i=i-2;i>=0;i--,x++)
    temp[x]=str[i];

    for(i=0;str[i];i++)
    if(temp[i]!=str[i])  return 0;
    return 1;
}
