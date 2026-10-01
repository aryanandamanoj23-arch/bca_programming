#include<stdio.h>
int main(){
    int firstnumber;
    int secondnumber;
    int choice;
    int result;
    printf("----welcome to my calculator----\n");
    printf("1.addition\n");
    printf("2.substraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
    printf("enter the firstnumber:");
    scanf("%d",&firstnumber);
    printf("enter the secondnumber:");
    scanf("%d",&secondnumber);
    do{
      if(choice==1){
      result=firstnumber+secondnumber;
      printf("sum of %d and %d is %d\n",firstnumber,secondnumber,result);
      }
      if(choice==2){
      result=firstnumber-secondnumber;
      printf("the difference between %d and %d is %d\n",firstnumber,secondnumber,result);
      }
      if (choice==3)
      {
      result=firstnumber*secondnumber;
      printf("multiplication of %d and %d is %d\n",firstnumber,secondnumber,result);
      }
      if (choice==4)
      {
      result=firstnumber/secondnumber;
      printf("division of %d and %d is %d \n",firstnumber,secondnumber,result);
      }
      choice++;
    }while(choice<=4);
printf("---end---");
return 0;
}

