#include <iostream>
#include <vector>
#include <string>
#include <stdbool.h>

// store a string a varibale use char data type is store a single character. so use varibale length to store characters store.
int main(){
    int myNum = 5;
    float myFlot = 5.99;
    // char name = "hello"; // this type is error becuse char data type is store a sigle character not a string.
    char name[] = "vinay"; // in this line to stroe a string in char data type using [] if this is blacke then varibale sore automaticaly your lenght of string.
    // if you put like [3] the only acess if string value lenght is 3 if this length noot 3 then show's error.
    // its recoment for blanck.
    printf("%s\n",name); // print seprated value then use (\n).if not use then all prints in single line.
    printf("%f\n",myFlot);
    printf("%d\n",myNum);

    // change varibale value . 
     myNum = 10;
     printf("%d\n",myNum);

    //  add numebr using + operator.
    int secoundNum = 5;
    int sum = myNum + secoundNum;
    printf("%d\n",sum);

    // seclare multiple varibale in single line.

    int x=2,y=5,z=6;
    printf("%d\n",x);
    printf("%d",x,y); // in this line not print y becuse the first varibale is x.
    printf("%d , %d\n",x,y); // if you print bouth varibale so decaler specifier both time.
    printf("%d\n",x+y); // in this case we have to sum the number in print like this.


    float flootNum = 2.6543;
    printf("%f\n" , flootNum);
    printf("%.2f\n" , flootNum); // .2 is only print 2 decimals.
    
    // this sizeof function to get varibale memory size if you print value the use data type %zu.
    printf("%zu\n",sizeof(flootNum));


    // if you don't went to chaange variable value.then use const keyword.
    // const varibale name must be uppercase its is good practice for rediblity.
    const int CONSTNUM = 2;
    printf("%d\n",CONSTNUM);
    // constNum = 5; // show error:assignment of read-only variable 'constNum'
    
    // create a boolean variable using stdbool.h hader.
    bool isVriableIsTrue = true;
    printf("%d\n",isVriableIsTrue); // its returen 1 (true).
    printf("%d\n",CONSTNUM > myNum); // its false 0 (false).
    
    return 0;

};



