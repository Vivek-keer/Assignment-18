#include <stdio.h>
#include <stdlib.h>
int lentgh(char str[]);
int main()
{
    char str[20];
    printf("Enter the string: ");
    fgets(str,20,stdin);
    printf("Length of string is %d", length(str));
    return 0;
}
int length(char str[])
{
    int i;
  for(i=0;str[i];i++);
  return i-1;
}
