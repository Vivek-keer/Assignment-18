#include <stdio.h>

void repchar(char str[]);
int main()
{
     char str[20]; int i;
     printf("Enter the string: ");
     fgets(str,20,stdin);
      for(i=0;str[i];i++);
     str[i-1]='\0';
     repchar(str);
     return 0;
}
void repchar(char str[])
{
    char temp; int x,i; int arr[256]={};
    for(x=0;str[x]; x++)
    {
        i=str[x];arr[i]++;
    }
    for(x=0;x<=255;x++)
    {
        if(arr[x]!=0)
        {
            temp=x;
            printf("No. of %c is %d\n",temp,arr[x]);
        }
    }
}
