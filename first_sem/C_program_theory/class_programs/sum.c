#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter N value:");
    scanf("%d",&n);
    if (n>=5){
     for(n=5;n<=10;n++){
        sum=sum+n;
     }
     printf("sum of the number from 5 to 10 is:%d",sum);
    }
    else{
        printf("please enter n>5");
    } 
    return 0;
}