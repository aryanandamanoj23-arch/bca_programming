#include <stdio.h>
int rollno[5];
char name[5][30];
int marks[5][5];
int total[5];
float avg[5], percentage[5];
int pass[5];
void get_student_data(){
    for(int i = 0; i < 5; i++){
        printf("\nEnter roll no: ");
        scanf("%d", &rollno[i]);
        printf("Enter name: ");
        scanf("%29s", name[i]);
        total[i] = 0;
        pass[i] = 1;
        for(int j = 0; j < 5; j++){
            printf("Enter mark of subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
}  
void get_total(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            total[i] = total[i] + marks[i][j];
            if(marks[i][j] < 35){
                pass[i] = 0;
            }
        }
    }
}
void get_avg_percentage(){
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            avg[i] = total[i] / 5.0;
            percentage[i] =(total[i] / 500.0) * 100;
        }
    }
}
void display(){
    for(int i = 0; i < 5; i++){
        printf("ROLL NO:%d  NAME:%s  TOTAL MARK:%d   AVERAGE:%.2f   PERCENTAGE:%.2f  ",rollno[i], name[i], total[i],avg[i], percentage[i]);
        if(pass[i] == 1)
            printf("PASS\n");
        else
            printf("FAIL\n");
    }
}
int main(){
    get_student_data();
    get_total();
    get_avg_percentage();
    display();
    return 0;
}