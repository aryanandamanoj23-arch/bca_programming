#include<stdio.h>
int main(){
    int x=10;              //integer varuable x stores 10
    int *p=&x;             //integer pointer stores the address of x
    printf("%d\n",x);      //display the value of x
    printf("%p\n",&x);     //display the address of x
    printf("%p",p);          //display the pointer which is address of variable x
}