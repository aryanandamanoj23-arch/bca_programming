#include<stdio.h>
//reads array size from KB
int read_array_size(){
    int size;    //local variable
    printf("enter the array size[>4]:");
    scanf("%d",&size);
    return size;
}  
int validate_array_size(int array_size){
    if(array_size>4){
      return 1;
   }
   return 0;
}
int main(){
   int isvalid=1;
   int arraysize;
   //calling method &stores returned value
   //passing array_size;int array_size=arraysize
   while (isvalid==0){
      arraysize=read_array_size();
      int validated=validate_array_size(arraysize);
      if(validated==1){
         

         break;
      }
      printf("ARRAY SIZE SHOULD NOT VALID:PLEASE TRY AGAIN");
   }
   int myarray[arraysize];
   for(int i=0;i<arraysize;i++){
      printf("enter %d array element:",i+1);
      scanf("%d",&myarray);


   }
}
