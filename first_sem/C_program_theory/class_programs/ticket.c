#include<stdio.h>
int main(){
    int catogory,N;
    int regular=0;
    int premium=0;
    int recliner=0;
    int total=0;
    printf("Enter Number Of Tickets:");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        printf("Enter catogory for ticket(1/2/3):");
        scanf("%d",&catogory);
        if (catogory==1){
        total=total+150;
        regular++;
        }
        if (catogory==2){
            total=total+250;
            premium++;
        }
        if(catogory==3){
            total=total+400;
            recliner++;
        }
        }
    printf("----FINAL BILL----\n");
    printf("Regular tickets:%d\n",regular);
    printf("premium tickets:%d\n",premium);
    printf("recliner tickets:%d\n",recliner);
    printf("total (before discount):%d\n",total);
    if(N>=5)
    {
        total=total-(total*10/100);
        printf("discount applied:yes\n");
    }
    else{
        printf("discount applied:No\n");
    }
    printf("Final amount:%d",total);
    return 0;
}