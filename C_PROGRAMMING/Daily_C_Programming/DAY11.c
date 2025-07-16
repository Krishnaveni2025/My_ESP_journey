

 
#include<stdio.h>
int main()
{
/*what will be the output of the following code?
FILE *fp = stdout;
int n;
fprintf(fp, "%d", 45);
fprintf(stderr,"%d", 65);//here we are using stderr because it is not buffered
//and it will print immediately without waiting for a newline character
//if we use stdout, it will wait for a newline character to flush the buffer
// The output will be 45,65
return 0;
}
FILE *fp = stdout;// stdout is a standard output stream
/* The standard output stream, which is usually the console.
  This is defined in <stdio.h> and is used for output operations.
 
FILE *fp = stdin;// stdin is a standard input stream
/* The standard input stream, which is usually the keyboard.
 * This is defined in <stdio.h> and is used for input operations.
 
int n;
fprintf(fp, "%d", 45);
}
what will be the output of the following code?
FILE *fp = stdout;
int n;
fprintf(fp, "%d", 45);
fprintf(stderr,"%d", 65);//here we are using stderr because it is not buffered
//and it will print immediately without waiting for a newline character
//if we use stdout, it will wait for a newline character to flush the buffer
// The output will be 45,65
return 0;
}
what will be the output of the following code?*/
FILE *fp = stdout;
int n;
fprintf(fp, "%d", 45);
fflush(stdout);
fprintf(stderr,"%d", 65);
return 0;
}
