/* 
   C LEVEL 11 Problem 06
                  Use Pointers
   Question: 
                  Write a function to copy a string to another
   Function Name: 
                  strcopy(src,dst)
*/
#include<stdio.h>
#define MAX_SIZE 8
void getgroupofchars(char *src);
void strcopy(char *src, char *dst);
void print(char *str);
int main()
{
   char source[MAX_SIZE], destination[MAX_SIZE];
   getgroupofchars(source);
   strcopy(source, destination);
   print(destination);
}
void getgroupofchars(char *src)
{
   printf("Source: ");
   scanf("%s",src);
}
void print(char *str)
{
   printf("Destination: %s",str);
}
void strcopy(char *src, char *dst)
{
   while (*src!='\0')
   {
      *(dst++) = *(src++);
   }
   dst = '\0';
}
