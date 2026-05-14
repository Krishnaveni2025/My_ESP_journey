/* 
   C LEVEL 12 - Problem 04
            Use Pointers
   Question: 
            Get a string using gets function and count all the words in it.
   Example:
            string: welcome to etalvis learning
            Answer: 4
*/
#include<stdio.h>
int main()
{
   char str[100];
   int i = 0, count = 0;
   printf("String: ");
   gets(str);
   while(*(str+i)!= '\0')
   {
      if(*(str+i) != ' ')
      {
         if(*(str+i) != '\t')
         {
            if(i == 0 || *(str+i-1) == ' ' || *(str+i-1) == '\t')
                        count++;
         }
      }
      i++;
   }
   printf("Output: %d",count);
   return 0;
}
