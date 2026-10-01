#include<stdio.h>
int main(){
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
     {
        if((i==5 && j==3)||(i==3 && j==2))
        printf(" ");
        else
        printf("%d ",j);
     }
    printf("\n");
    }
    return 0;
}