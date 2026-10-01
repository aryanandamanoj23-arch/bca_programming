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
int gettotal(){
    total=m1+m2+m3+m4+m5;
    return total;
}
float getaverage(){
    avg=total/5;
    return avg;
}
float getCGPA(){
    cgpa=avg/9.5;
    return cgpa;
}
void display(){
    printf("ROLL NO:%d",rollno);
    printf("MARK OF SUBJECT1:%d\n",m1);
    printf("MARK OF SUBJECT2:%d\n",m2);
    printf("MARK OF SUBJECT3:%d\n",m3);
    printf("MARK OF SUBJECT4:%d\n",m4);
    printf("MARK OF SUBJECT4:%d\n",m5);
    printf("TOTAL:%d\n",total);
    printf("AVERAGE:%f\n",avg);
    printf("CGPA:%f\n",cgpa);
}
int main(){
 //declaration
 //user defined function
get_student_data();
int sum=gettotal();
float average=getaverage();
float CGPA=getCGPA();
display();
printf("TOTAL MARKS:%d\n",sum);
printf("TOTAL AVERAGE MARK:%f\n",average);
printf("TOTAL CGPA:%f\n",CGPA);
}
