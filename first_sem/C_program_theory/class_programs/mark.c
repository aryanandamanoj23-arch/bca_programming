#include <stdio.h>
int main(){
    int mark1,mark2,mark3;
    int student;
    int total;
    int avg;
    do{
        printf("enter the student:");
        scanf("%d",&student);
      printf("enter the mark of exam1: ");
      scanf("%d",&mark1);
      printf("enter the mark of exam2: ");
      scanf("%d",&mark2);
      printf("enter the mark of exam3: ");
      scanf("%d",&mark3);
      total=mark1+mark2+mark3;
      avg=total/3;
      printf("total mark:%d \n",total);
      printf("average:%d \n",avg);
      printf("grade:");
       if (avg>=70 && avg<=80)
       {
       printf("distinction");
       }
       if (avg>=60 && avg<70)
       {
       printf("firstclass");
       }
       if (avg>=35 && avg<60)
       {
       printf("secondclass");
       }
       else{
        printf("failed");
       }
    student++;
    }while(student<=3);
    return 0;
}
