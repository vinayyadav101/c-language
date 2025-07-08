#include <stdlib.h>
#include <stdio.h>

int main(){

    FILE *fptr;

    // fptr = fopen("hello.txt","w"); // "w" mode is use for open and write the contant in the file.

    fptr = fopen("hello.txt","r"); // "r" mode is use for read only .
    // fprintf function to use write contant in the file.
    // fprintf(fptr , "hello world!");

    char string[100];

    fgets(string , 100 , fptr);


    printf("%s", string);


    // fclose function to close the file and save all changes..
    fclose(fptr);

    // system("pause");
    return 0;
}