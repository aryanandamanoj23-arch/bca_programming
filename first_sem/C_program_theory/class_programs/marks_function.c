#include<stdio.h>
int rollno;
int m1,m2,m3,m4,m5;
int total;
float avg,cgpa;
void get_student_data(){
    printf("enter roll no:");
    scanf("%d",&rollno);
    printf("mark of subject1:");
    scanf("%d",&m1);
    printf("mark of subject2:");
    scanf("%d",&m2);
    printf("mark of subject3:");
    scanf("%d",&m3);
    printf("mark of subject4:");
    scanf("%d",&m4);
    printf("mark of subject5:");
    scanf("%d",&m5);
}
void gettotal(){
    total=m1+m2+m3+m4+m5;
    printf("TOTAL MARK:%d\n",total);
}
void getaverage(){
    avg=total/5;
    printf("AVERAGE MARK:%f\n",avg);
}
void getCGPA(){
    cgpa=avg/9.5;
    printf("CGPA:%f",cgpa);  
}
int main(){
 //declaration
 //user defined function
get_student_data();
gettotal();
getaverage();
getCGPA(); 
}
