#include <stdio.h>
#include <stdlib.h>
int strcmp(char str1[],char str2[]);
int main()
{
    int diff;
    char str1[20], str2[20];
    printf("Enter the first string: ");
    fgets(str1,20,stdin);
    printf("\nEnter the second string: ");
    fgets(str2,20,stdin);
    diff=strcmp(str1,str2);
    if(diff<0)
        printf("Smaller is %s",str1);
    else printf("Smaller is %s",str2);
    return 0;



}
int strcmp(char str1[],char str2[])
{
    int i,x=0;
    for(i=0;str1[i]&&str2[i];i++)
    {
        x=str1[i]-str2[i];
        if(x==0) continue;
        else break;
    }
    return x;
}
