#include<stdio.h>
int sum(int n[]){
    if(n==0){         //base condition
        return 1; 
    }
    return n[]+sum(n-1);
}
int main(void){
    int n[5];
    for(int i=0;i<5;i++){
        printf("enter the number:");
        scanf("%d",&n[i]);
    }
    printf("SUM OF ARRAY ELEMENTS IS:%d",sum);
    return 0;
}