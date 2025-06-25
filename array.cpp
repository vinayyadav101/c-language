#include <string>

int main(){
    const int MYARRAY[] = {22,20,23,34};
    int length =  sizeof(MYARRAY) / sizeof(MYARRAY[0]);

    printf("%d\n", length);
    printf("%d\n",MYARRAY[0]);
    for (int i = 0; i < length; i++){
        printf("%d\n" , MYARRAY[i]);
    }
    return 0;
}