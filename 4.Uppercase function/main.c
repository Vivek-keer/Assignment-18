#include <stdio.h>
#include <stdlib.h>
char* uprcase(char str[]);
int main()
{
    char str[20];
    int i;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    printf("%s",uprcase(str));


    return 0;
}
char* uprcase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    if(str[i]>=97&&str[i]<=122)
        str[i]=str[i]-32;
    else continue;
    return str;
}
