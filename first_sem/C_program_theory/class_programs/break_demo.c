#include <stdio.h>
int main(){
    for(int j=0;j<5;j++){
        printf("loop started\n");
        for(int i=0;i<=5;i++){
            printf("inner loop started\n");
            break;
            printf("from inner loop\n");
        }
        if(j==2){
        printf("from outer loop\n");
        break;
        }
    }
printf("program terminated...");
}