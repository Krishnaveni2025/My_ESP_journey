/*How to write a single character to a file "fputc"
#include<stdio.h>
int main()
{
    char data[] = "follow the flow";
    FILE *fp = fopen("esp.txt","w");
    if(fp == NULL)
    {
        perror("Error Open ing file");
    }
    else
    {
       // printf("%c",fputc('k',fp));
       int index = 0;
       char ch = '\0';
       while(data[index]!='\0')
       {
        ch = fputc(data[index],fp);
        printf("%c",ch);
        index++;
       }
      fclose(fp);
    }
    return 0;
}
How to reaad a single character too a file "fgetc"
#include<stdio.h>
int main()
{
    FILE *fp = fopen("esp.txt","r");//1.file contents "follow the flow"
    //2.if file is empty
    //3.if use fgetc again and again
    //4.to read string
    if(fp == NULL)
    {
        perror("Error Opening file");
    }
    else{
        int ch_code = '\0';

        //printf("%d : %c\n",ch_code,ch_code);//output1 102:f
        //output2 -1: (which represents the end of file EOF)
        //ch_code = fgetc(fp);
        //printf("%d : %c\n",ch_code,ch_code);

        //ch_code = fgetc(fp);
        //printf("%d : %c",ch_code,ch_code);
        //it will print next character
        while((ch_code = fgetc(fp))!= EOF)
        {
            printf("%d : %c\n",ch_code,ch_code);
        }
    }
    return 0;
}
    fputs() function syntax:
    fputs(string_name,filepointer);
   #include<stdio.h>
   int main()
   {
    FILE *es = fopen("esp.txt","a");
    char input[100];
    if(es == NULL){
        printf("Unable to open the file\n");
    }else{
        printf("Enter a string to write to the file\n");
        gets(input);
        fputs(input,es);
        printf("the string is  written to the file successfully\n");
        fclose(es);
    }
   // getchar();
    return 0;
   }

   fprintf() function syntax:
   fprintf(filepointer,"format specidier",list of variables);
   it is used to write to the file in a formated way

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
    FILE *pf;

    char name[100];
    int age;
    printf("Enter your name and age");
    scanf("\n%s\n",name);
    scanf("\n%d",&age);

    pf = fopen("esp.txt","a");
    if(pf == NULL){
        printf("Unable to open the file\n");
    }else{
        fprintf(pf,"%s\t%d\n",name,age);
        printf("data returned successfully\n");
        fclose(pf);
    }
    getch();
    return 0;
  }
    fscanf() syntax:
    fascanf(file_pointer,"formatsepecifier",list of address variables);
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *pf;

    char data[10];
    char name[10];
    int age1,age2;
    pf = fopen("esp.txt", "r");
    if (pf == NULL)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        fscanf(pf, "%s\t%d\n%s\t%d", name,&age1,data,&age2);
        printf("%s\t%d\n%s\t%d",name,age1,data,age2);
        fclose(pf);
    }
   // getch();
    return 0;
}
    synatax for fgets()
    fgets(varaiable_to_store,length,file_pointer);
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *pf;

    char data[100];
    
    pf = fopen("esp.txt", "r");
    if (pf == NULL)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        while (!feof(pf))
        {
            fgets(data,100,pf);
            printf("the characters are read %s",data);
        }
        

        fclose(pf);
    }
    // getch();
    return 0;
}
    rename function syntax
    int rename(old_fname,new_fname);
    -->returns zero if successful
    -->returns non zero if an errror has occured
    while renaming*/
    #include<stdio.h>
    #include<conio.h>
    int main()
    {
        if(rename("rename.c","kittu.c")==0){
            puts("file is renamed successfully");
        }else{
        puts("Error while renaming");
        }
        getch();
        return 0;
    }

