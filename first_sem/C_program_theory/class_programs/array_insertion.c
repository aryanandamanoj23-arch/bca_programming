#include<stdio.h>
int main(){
   int arr[5];
   int newdata,index;
   for(int i=0;i<4;i++){
    printf("INPUT %d array element:",i+1);
    scanf("%d",&arr[i]);
   }
   printf("enter the new element:");
   scanf("%d",&newdata);
   printf("enter index value:");
   scanf("%d",&index);
   //insertion process to insert 'newdata' at index 'index'
   arr[index]=newdata;
   arr[4]=arr[3];
   arr[3]=arr[2];
   arr[index]=newdata;
   for (int i=0;i<5;i++){
    printf("%d",arr[i]);

   }
   printf("ARRAY[%d]",arr[0]);

}