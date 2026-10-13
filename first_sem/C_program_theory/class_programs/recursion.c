#include<stdio.h>
int factorial(int n){
    if(n==0){         //base condition
        return 1; 
    }
    return n*factorial(n-1);
}
int main(void){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("%d!=%d",n,factorial(n));
    return 0;
}