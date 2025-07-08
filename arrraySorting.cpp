#include <stdio.h>
#include <stdlib.h>
#include <string.h>
strl

int main(){


    // one dimantional array
    int array[10] = {5,23,78,90,30,76,28,20,48,2};

    int i,k , temp;
    printf("Array before the shorting:\n");
    for (i=0; i<10; i++)
    {
        printf("%d\t",array[i]);
    }
    
    for (i=0; i<10; i++)
    {
        for (k=i+1; k<10; k++)
        {
            // printf("\n%d" , array[k]);
            if (array[k]<array[i])
            {
                temp = array[i];
                array[i] = array[k];
                array[k] = temp;
            }
            
        }
        
    }
    printf("\nafter the sorthing:\n");
    for (i=0; i <10; i++)
    {
        printf("%d\t",array[i]);
    }
    

    // two dimantional array

    int twodimantionalArry[3][3];

    for (i=0; i<3; i++)
    {
        for (k=0; k<3; k++)
        {
            printf("enter the value fo twodimantionalArray[%d][%d]:",i,k);
            scanf("%d",&twodimantionalArry[i][k]);
        }
        
    } 
    printf("\ntwodimantionalArray:\n");
    for (i=0; i < 3; i++)
    {
        for (k=0; k<3; k++)
        {
            printf("%d\t",twodimantionalArry[i][k]);
        }
        printf("\n");
    }
    
    system("pause");
    strlen
}