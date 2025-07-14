
/*Writing to And reading from a file
#include<stdio.h>
int main()
{
    FILE *f1;//Data Structure of a file is defined as FILE in the library of sdtio function definitions
    //f1 as a pointer to the data type FILE
    //FILE is a structure that is defined in the I/O library
    char c;
    printf("Data Input\n\n");
    f1 = fopen("INPUT","w");//opens the file INPUT
    while((c=getchar())!=EOF)//get a char from the keyboard
          putc(c,f1);//write a character to INPUT

    fclose(f1);

    printf("Data OUTPUT\n\n");
    f1 = fopen("INPUT","r");//repoen the INPUT file

    while((c = getc(f1))!=EOF)//read the character from INPUT
          printf("%c",c);//Display a character on screen
    fclose(f1);

}
    #include <stdio.h>
    int main()
    {
        int x = 3, y = 2;
        int z = x << 1 > 5;// Left shift x by 1 and check if it is greater than 5
        // The expression evaluates to 1 if true, 0 if false
        // In this case, 3 << 1 is 6, which is greater than 5, so z will be 1
        printf("%d\n", z);
    }
#include <stdio.h>
int main()
{
      int ThisIsVariableName = 12;
      int ThisIsVariablename = 14;
      printf("%d\n", ThisIsVariableName); // Outputs 12
      printf("%d\n", ThisIsVariablename); // Outputs 14
      // Variable names are case-sensitive in C, so these are two different variables.
      // ThisIsVariableName and ThisIsVariablename are distinct identifiers.
      // The first one is defined as 12, and the second one as 14.
      // The output will show the values of each variable correctly.
      return 0;
}*/

/*int main()
{

    //int main = 10; // 'main' is a valid identifier in C, but it's not recommended to use it as a variable name.
    //printf("%d\n", main); // This will print the value of 'main', which is 10.
    // However, using 'main' as a variable name can lead to confusion, as it's typically reserved for the entry point of a C program.
    // It's better to use descriptive names for variables to avoid such conflicts.
    int x = 12;
    int x = 67; // This will cause a compilation error because 'x' is defined twice in the same scope.
    // In C, you cannot declare the same variable name more than once in the same scope.
    // To fix this, you can either use a different variable name or remove one of the declarations.
    // For example:
    // int y = 67; // This is valid and will not cause an error.
     printf("Hello, World!%d",x);
      return 0;
}
int main() {
      enum{ORANGE=5,BANANA,MANGO=10,APPLE};
      printf("%d\n",APPLE);// Outputs 11
      //BECAUSE:
      // ORANGE = 5
      // BANANA = ORANGE + 1 = 6
      // MANGO = 10
      // APPLE = MANGO + 1 = 11
      // So, APPLE is assigned the value of 11.
      return 0;
}
#define a 10
int main()
{
      const int a = 20; // This will cause a compilation error because 'a' is defined as a macro with value 10.
                        // In C, macros defined with #define take precedence over variable declarations.
                        // To fix this, you can either rename the macro or the variable.
      printf("%d\n", a);
      return 0;
}
 The above code will not compile due to the conflict between the macro 'a' and the variable 'a'.*/
 #include <stdio.h>
 #include<string.h>
int main()
{
      char *str = "X";
      char c = 'X';
      char ary[1] ;
      ary[0] = c;
      printf("%d %d",strlen(str), strlen(ary)); // Outputs 1 1
      chat *p = "ascsac\0""trainingclasse"; // This is a valid string literal in C.
      // The string literal is "ascsac\0trainingclasse", which is a single string with a null terminator.
      // The \0 character indicates the end of the string, so the length of the string will be counted up to the first null character.
      printf("%d\n", strlen(p)); // Outputs 6
      // The length of the string "ascsac" is 6, as it counts characters until the first null terminator.
      int var = 010;
      printf("%d\n", var); // Outputs 8
      // The number 010 is interpreted as an octal (base 8) number in C because it starts with a 0.
      // In octal, 010 is equal to 8 in decimal.
      return 0;
}
