#include <stdio.h>
//push methode definition
void push(int stack[], int data, int size, int *top){
    if (*top == size-1){
        printf("Overflow\n");
        return;
    }
    (*top)++;
    stack[*top] = data;
    printf("Data pushed successfully\n");
}
//pop method definition
void pop(int stack[], int *top){
    if (*top == -1){
        printf("Stack is Underflow!\n");
    }
    else{
        printf("Popped data: %d\n", stack[*top]);
        (*top)--;
    }
}
// disply method definition
void display(int stack[], int top){
    if (top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
    }
}
int main(){
    int size = 5;
    int stack[5];     //declaring one stack to hold 5 integer data
    int top = -1, choice, n;    //to represent stack top.initially contains '-1'
    do{
        printf("1. Push data\n");
        printf("2. Pop data\n");
        printf("3. Display stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter stack data: ");
                scanf("%d", &n);
                push(stack, n, size, &top);
                break;
            case 2:
                pop(stack, &top);
                break;
            case 3:
                display(stack, top);
                break;
            case 4:
                printf("Exiting....\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice!=4);
    return 0;
}