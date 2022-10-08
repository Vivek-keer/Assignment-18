#include <stdio.h>
#include <stdlib.h>
char* lwrcase(char str[]);
int main()
{
    char str[20];
    int i;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    printf("%s",lwrcase(str));


    return 0;
}
char* lwrcase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    if(str[i]>=65&&str[i]<=90)
        str[i]=str[i]+32;
    else continue;
    return str;
}
