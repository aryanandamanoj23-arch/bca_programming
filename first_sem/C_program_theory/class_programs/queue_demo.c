#include <stdio.h>
#define size 5
int queue[size];
int front=-1;
int rear=-1;

int isFull(){
    if(rear==size-1){
        printf("Queue is full!cant store further data\n");
        return 1;
    }
    return 0;
}
int isEmpty(){
    if(front==rear-1){
        printf("Queue is empty !cant retrive anymore\n");
    }
    return 0;
}
//enqueue methode definition
void enqueue(int queue[], int data,int *rear){
    if (isFull()){
        printf(" Queue Overflow!\n");
        return;
    }
    (*rear)++;
    queue[*rear]=data;
    printf("Data enqueue successfully\n");
}
//dequeue method definition
void dequeue(int stack[], int *front){
    if (isEmpty()){
        printf("Queue is Underflow!\n");
    }
    else{
        (*front)++;
        printf("dequeue data: %d\n", stack[*front]);
        
    }
}
// disply method definition
void display(int queue[], int front){
    if (isEmpty()){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements are:\n");
        for (int i =front; i>= 0; i--){
            printf("%d\n", queue[i]);
        }
    }
}
int main(){
    int queue[size];     //declaring one queue to hold 5 integer data
    int front=-1,choice,n,rear=-1;    //to represent queue floor and rare.initially contains '-1'
    do{
        printf("1. Enqueue data\n");
        printf("2. Dequeue data\n");
        printf("3. Display stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter queue data: ");
                scanf("%d", &n);
                isFull();
                enqueue(queue, n,&rear);
                break;
            case 2:
                isEmpty();
                dequeue(queue, &front);
                break;
            case 3:
                display(queue, front);  
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
