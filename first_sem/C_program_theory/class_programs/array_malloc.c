#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,size;
    int sum=0;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    p = (int *)malloc(sum * sizeof(int));  //it allocates memory for n number of integers
    if (p == NULL){
        printf("Memory allocation failed");
        return 1;
    }
    for (int i=0;i<size;i++){
        printf("Enter %d array element:",i+1);
        scanf("%d", &p[i]);
    }
    for (int i=0;i<size;i++){
        sum=sum+p[i];   //calculate sum of all elements 
    }
    printf("Sum of array elements = %d\n", sum);
    free(p);               //releases the allocated memory
    return 0;
}