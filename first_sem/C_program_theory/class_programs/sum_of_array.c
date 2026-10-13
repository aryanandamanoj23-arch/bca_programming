#include<stdio.h>
int get_array_sum(int number[]){
    int sum;
    for(int i=0;i<5;i++){
        sum=sum+number[i];
    }
    return sum;
}
int main(){
    int num[5];
    for(int i=0;i<5;i++){
        printf("enter the element %d:",i+1);
        scanf("%d",&num[i]);
    }
    int total=get_array_sum(num);
    printf("Sum of array element=%d",total);
    return 0;
}