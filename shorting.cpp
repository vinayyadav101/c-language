#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shortP1(int a[],int n);
void shortP2(int a[],int n);
void bubbleShort(int a[],int n);
void quickShort(int a[],int n);

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
    // printf("\n<-------After store all data in array1 . array is value are below------>\n");
        // PrintArray(Array1,N);
    // printf("\n<-------After store all data in array2 . array is value are below------>\n");
        // PrintArray(Array2,N);


    // shortP1(Array1,N);
    // shortP2(Array2,N);
        // printf("\n<-------After store all data in array1 . array is value are below------>\n");
    // PrintArray(Array1,N);
        // printf("\n<-------After store all data in array2 . array is value are below------>\n");
    // PrintArray(Array2,N);

        printf("\n<-------after short array using buuble . array is value are below------>\n");
            quickShort(Array1,N);
    
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

void bubbleShort(int a[],int n){

    int i , j ,temp;
    int end = n-1;

        for (i = 0; i < n-1; i++)
        {
            int n_swap = 0;
            for (j = 0; j < end; j++)
            {
                if (a[j]>a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    PrintArray(a,n);
                    n_swap++;
                    printf("%d\n",n_swap);
                }
            }
            if (n_swap != 0)
            {
                end--;
                printf("END:-%d\n",end);
            }else{
                break;;
            }
            
        }
        
}

void quickShort(int a[],int n){
    int i,j ,key_val,temp;

        key_val = 0;
    for ( i=1; i < n-1; i++)
    {
        if (a[i] > a[key_val])
        {
            break;
        }
        
    }
PrintArray(a,n);
printf("i=%d\n",i);
    for (j = n-1; j > i; j--)
        {
            if (a[j] < a[key_val])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++;
            }
            printf("i=%d\n",i);
            printf("j=%d\n",j);
            PrintArray(a,n);
            // break;
        }

        temp=a[i-1];
        a[i-1]=a[key_val];
        a[key_val]=temp;
        printf("print after partition\n");
        printf("i=%d\n",i);
        printf("j=%d\n",j);
        PrintArray(a,n);
}