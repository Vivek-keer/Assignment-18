#include <stdio.h>
#include <stdlib.h>
void wordrev(char str[],int);
int wordcount(char str[]);
int main()
{
     char str[50]; int i;
     int max;
     fgets(str,50,stdin);
     for(i=0;str[i];i++);
     str[i-1]='\0';
     for(max=wordcount(str);max>0;max--)
     wordrev(str,max);

}
int wordcount(char str[])
{
    int x,count;
    for(x=0,count=1;str[x];x++)
        if(str[x]==32) count++;
    return count;
}
void wordrev(char str[],int max)
{
    int count,c;
     for(c=0,count=1;str[c];c++)
     {
         if(max==count)
         {
             while(str[c])
             {
                 if(str[c]==32){ printf(" "); return; }
               printf("%c",str[c]);
                 c++;
             }
             printf("\t");
         }
         else if(str[c]==32) count++;
     }
}
 
