#include <stdio.h>
struct Employee{
    int emp_id;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};
int main(){
    struct Employee emp[3];
    printf("Enter details of 3 employees:\n");
    for (int i = 0; i < 3; i++){
        printf("\nEnter Employee ID: ");
        scanf("%d", &emp[i].emp_id);
        printf("Enter Employee Name: ");
        scanf(" %s", emp[i].name);
        printf("Enter Designation: ");
        scanf(" %s", emp[i].designation);
        printf("Enter Department: ");
        scanf(" %s", emp[i].department);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\n--- Employee Details ---\n");

    for (int i = 0; i < 3; i++){
        printf("\nEmployee ID: %d\n", emp[i].emp_id);
        printf("Name: %s\n", emp[i].name);
        printf("Designation: %s\n", emp[i].designation);
        printf("Department: %s\n", emp[i].department);
        printf("Salary: %.2f\n", emp[i].salary);
    }
    return 0;
}