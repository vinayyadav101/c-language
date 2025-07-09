#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shortP1(int a[],int n);
void shortP2(int a[],int n);

void PrintArray(int Array[],int n){
int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=%d\t",i,Array[i]);

        if (i==n-1)
        {
            printf("\n");
        }
        
    }
}

int main(){
    #define N 6
    int Array1[N]={5,23,55,20,19,2} , Array2[N],i;

        memcpy(Array2,Array1,sizeof(Array1));
    printf("\n<-------After store all data in array1 . array is value are below------>\n");
        PrintArray(Array1,N);
    printf("\n<-------After store all data in array2 . array is value are below------>\n");
        PrintArray(Array2,N);


    shortP1(Array1,N);
    shortP2(Array2,N);
        printf("\n<-------After store all data in array1 . array is value are below------>\n");
    PrintArray(Array1,N);
        printf("\n<-------After store all data in array2 . array is value are below------>\n");
    PrintArray(Array2,N);
    
    system("pause");
}

void shortP1(int a[],int n){
    int i,k,temp;
    
    printf("<------ <shortP1> function After element change the array print ---->\n");

    for (i=0; i<n; i++)
    {
        for (k=i; k<n; k++)
        {
            if (a[k]<a[i])
            {
                temp = a[i];
                a[i] = a[k];
                a[k] = temp;
                
                PrintArray(a,n);
            }
            
        }
        
    }
}

void shortP2(int a[],int n){
    int i ,k,temp , minIndex;

    printf("<------ <shortP2> function After element change the array print ---->\n");

    for (i=0; i<n-1; i++)
    {
        minIndex = i; // this is medotory to initial value i. becuse for k comparision.
        for (k = i+1; k < n; k++)
        {
            if (a[k] < a[minIndex])
            {
                minIndex = k;
            } 
        }
        if (minIndex != i)
        {
            temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;

            PrintArray(a,n);
        }
        
    }
    
}