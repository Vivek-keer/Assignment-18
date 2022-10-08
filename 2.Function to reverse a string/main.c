#include <stdio.h>
#include <stdlib.h>
void rev(char str[],int i);
int main()
{
   int i; char str[20];
   printf("Enter the string: ");
   fgets(str,20,stdin);
    for(i=0;str[i];i++);
   str[i-1]='\0';
   rev(str,i-1);
   return 0;
}
void rev(char str[],int i)
{

     char temp[20]; int x;
     for(x=0,i=i-1;i>=0;i--,x++)
        temp[x]=str[i];
     printf("Reverse of string: %s",temp);
}
