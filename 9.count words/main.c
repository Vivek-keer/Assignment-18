#include <stdio.h>
#include <stdlib.h>
int wordcount(char str[]);
int main()
{
     char str[50];
     printf("Enter the sentence\n");
     fgets(str,50,stdin);
     printf("Number of Words in string is %d",wordcount(str));

}
int wordcount(char str[])
{
    int x,count;
    for(x=0,count=1;str[x];x++)
        if(str[x]==32) count++;
    return count;
}
