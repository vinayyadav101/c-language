#include <stdio.h>

#define N 4

void push(int A[] ,int *top,int n,int value){
   if (*top >= n-1)
   {
    printf("stack is overflow\n");
    return;
}

    *top = *top + 1; // first increase the top becuse array is first index is 0 and after add one element the top is 0 its means top 0 is full.

    A[*top] = value;

}
void pop(int A[] , int *top){
    if (*top <= -1)
    {
        printf("underflow");
    }
    
    A[*top] = 0; // this is overwrite the value of 0 becuse in array not delete the value its noly overwriting

    *top = *top -1;

    printf("%d\n", value);
    return;
}


int main(){
    int A[N];
    int top = -1; // this initial to emty stack 

    push(A,&top,N,4);
    push(A,&top,N,5);
    push(A,&top,N,3);
    push(A,&top,N,2);
    push(A,&top,N,2);

    pop(A,&top);

    for (int i = 0; i < N; i++)
    {
        printf("%d\t",A[i]); 
    }
    // if push only one value after print array output is show below.
    // outpu: 4	0	-1877897016	442	 this index 1 ,2,3 value are grabe value its memory randome value so.



}

