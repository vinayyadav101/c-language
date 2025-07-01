#include <stdio.h>
#include "exporterFuncton.cpp"  // import syntex for function to the aother file.

void myFunction();
extern void Export(); // extern to store the value in this file from import
int main(){
    Export();
    myFunction(); // call a myFunction like this way
}

void myFunction(){
    printf("this is a function");
}