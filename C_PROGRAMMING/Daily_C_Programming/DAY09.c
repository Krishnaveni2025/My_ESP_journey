

/*file remove function
   int remove(file_name);
if return value is
                    0-->file is deleted successfully
                    non zero-->error ehile deleting the file
                    note: the .exe file of the program and the file which has to be deleted must be in same folder
#include<stdio.h>
#include<conio.h>
int main()
{

int status;
status = remove("example.txt");
printf("%d\n",status);
if(status==0)
{
    puts("file deleted");
}
else{
    puts("error while deleting the file");
}
getch();
return 0;
}
int ferror(FILE *pt);
it the return value is zero --> the last operation , not produced any error
non zero--> the last operation ,produced an error
void clearerr(FILE *pt);
used to clear the error flags
after this if we call ferror it will return 0
#include<stdio.h>
#include<conio.h>
int main()
{
int status;
char data[20]="hello dude";
FILE *fp;
fp = fopen("rename.txt","r");
if(fp!=NULL){
    fprintf(fp,"%s",data);
    status = ferror(fp);
    printf("%d",status);
    clearerr(fp);
    status = ferror(fp);
    if(status==0){
        puts("No r/w errors");
    }else{
        puts("r/w errors occured");
    }
}else{
    puts("unable to r/w");
}
getch();
return 0;
}
rewind function syntax
void rewind(FILE *fp)
#include<stdio.h>
#include<conio.h>
int main()
{

FILE *fp;
fp=fopen("rename.txt","r");
while(!feof(fp)){
    putchar(fgetc(fp));
}
rewind(fp);
printf("\n");
while(!feof(fp)){
    putchar(fgetc(fp));
}
getch();
return 0;
}
syntax of tmpfile function
FILE *tmpfile();
            -creates a temporary binary file and opens in w+b mode

#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *tmp;
    char data[] = "hello lol";
    int length = strlen(data);
    int counter = -1;
    tmp = tmpfile();
    if (tmp != NULL)
    {
        puts("temp file is created");
        while (++counter < length)
        {
            fputc(data[counter], tmp);
        }
        rewind(tmp);
        while (!feof(tmp))
        {
            putchar(fgetc(tmp));
        }
    }
    else
    {
        puts("unable to create the temp file");
    }
    getch();
    return 0;
}
    syntax of tmpnam function
    char *tmpnam(char *name);
    */
#include <stdio.h>
#include <conio.h>
int main()
{
    char name[L_tmpnam +1];
    tmpnam(name);
    puts(name);
    getch();
    return 0;
}
