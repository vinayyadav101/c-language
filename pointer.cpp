// for example memmory address.
#include <string>
#include <string.h>
#include <stdlib.h>

int main(){
    int myNum = 24;
    char string[] = "vinay";
    printf("%p\n",&myNum); // %p ,(& is the reference oprator) is to memmory located address to print , output 00000093525ffa5c
    printf("%p\n",&string); // output 00000093525ffa56


    // pointer concept is a store memmory address in variable.some example is below.

    int* myNumPtr = &myNum; // for store memmory address in variable to use pointer oprator (*). and also medatory of variable data type is same to get address of variable.

    // Note the (*) oprator is only imidatly after data type.not imidatly before variable name.
    // pointers must be handled with care, since it is possible to damage data stored in other memory addresses.

    printf("%p\n",myNumPtr); // above myNum variable address and this variable address are same becuse using pointer to store address in varible like output is 00000070575ffa74.


    // ponter in arrays.first of create array and print all value.

    int myArray[5] = {22,24,25,52,55};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",myArray[i]);
        printf("%zu\n",sizeof(myArray[i])); // all index value size is 4 becuse this data type is int.
        // get memmory address of all elements in array.

        printf("%p\n",&myArray[i]);
    }
    
// memmory address alocation to explain to fist time to see any one this output.
// all five elemets address are below.

// in memmory address first 14 latters are same all output.

            // (First elemet)

            // strat (c) serice and this serice get 4 bit store 0,4,8, after this 8 complete c serice like using (c) then start d derice like above the menthion.
            // 22
            // 4
            // 0000005d2cbffbc0  
            // (second elemet)
            // 24
            // 4
            // 0000005d2cbffbc4
            // (thired elemet)
            // 25
            // 4
            // 0000005d2cbffbc8
            // (fourth elemet)
            // 52
            // 4
            // 0000005d2cbffbcc
            
            // (d) serice start like above the menthion.

            // (fifth elemet)
            // 55
            // 4
            // 0000005d2cbffbd0


// using pointer oprator to manuplate the array avlues.like above the mention exmaple.

    int myArrays[4] = {2,55,65,5};

    int *myArrayValue = myArrays; // this is by default store first value

    printf("%d\n" , *myArrayValue);// output is first value of array

    printf("%d\n",*(myArrayValue + 1)); // this print second value of array

    // how to change the value of array

    *myArrayValue = 13;  //this to change value and belove to diract in array value change using pointer oprtore like this line code.
    *myArrays = 0; // in the below print both output are same.
    printf("%d\n",*myArrayValue); // 0
    printf("%d\n",*myArrays); // 0

    system("pause");
}