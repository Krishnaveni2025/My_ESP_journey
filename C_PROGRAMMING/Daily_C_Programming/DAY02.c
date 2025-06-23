/* Write a loop program 
to print 1 to 5 one by one. 
Write a funnction and print the result in a main  function. 
Function NAme : arrange_ascend 
Answer: 
1
2
3
4
5
*/
#include<stdio.h>
void arrange_ascend(int *ptr);
int main()
{
    int num,*p;
    p=&num;
    arrange_ascend(p);
    return 0;
}
void arrange_ascend(int *ptr)
{
int i;
for(i=1;i<=5;i++)
{
*ptr=i;
printf("%d\n",*ptr);
}
}
