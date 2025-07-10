
/*files handling in c
in c programming , there are two types of files.
1. Text Files: in the text format & are readable & understandable
2. Binary Files: in the binary form not understandable by humans */
#include<stdio.h>
int main()
{
    //fopen("file name","mode");
    //below are the modes for text filess, for binary files "rb","wb","ab","rb+","wb+","ab+"
    //                  "r"-->if the file is present,open the file for reading purpose
    //                     -->if the file has any information it will be preserved  
    //                     -->if file is not found or any error in opening it return NULL
    //                  "w"-->if the file is present , information is cleared and opens brand new file
    //                     -->if the file is absent, a new file is created with the file name
    //                  "a"-->if the file is absent, a new file is created with the file name
    //                     -->if the file is present , information of file is preseved
    
    //                  "r+"--->if the file is present, open the file for writing & reading purpose
    //                      --->if the file is absent, it will not create a new file it will reeturn a NULL pointer
    //                  "w+"--->if the file is present , opens file for read and write operation
    //                      --->if it has any contents will be cleared
    //                      --->if the file is absent, creates a new file and opens
    //                  "a+"--->if the file present, opens the file for read & write operations
    //                      --->if the file is already haas information , it will be preserved
    //                      --->if the file is absent, creates a new file for read & write operation

    FILE *file_pointer = NULL;
    //file_pointer = fopen("esp.txt","r");//1the file is absent so it will return NULL
    //file_pointer = fopen("esp.txt","w");//2file is absent so creates a new file
    //file_pointer = fopen("esp.txt","w");//3file is present and had information
    file_pointer = fopen("esp.txt","a");//4.file is already present and had information, so the contents will be preserved
    if(file_pointer == NULL)
    {
        printf("Error while opening the file");//output1
    }
    else{
        printf("File opened successfully");//output2 creates new esp.txt file
        //output3 the file opens contents of the file cleared
        //output4 the information of file will be preserved
        fclose(file_pointer);// file closed
    }
    return 0;
} 
