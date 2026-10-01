#include<stdio.h>
int main(){
    int accno=1000;
    float balance=500;
    int option;
    int amount,useraccno;
    printf("----welcome to my bank----\n");
    printf("1.deposite\n");
    printf("2.withdraw\n");
    printf("3.account view\n");
    printf("4.exit\n");
    printf("enter your option:");
    scanf("%d",&option);
    printf("enter your accno:");
    scanf("%d",&useraccno);
    if(useraccno==accno){
        printf("valid acc\n");
    }
    else{
        printf("invalid acc\n");
    }
    switch (option)
    {
        case 1:
        printf("enter deposite amount:");
        scanf("%d",&amount);
        balance=balance+amount;
        printf("balance:%f",balance);
        break;
        case 2:
        printf("enter withdraw amount:");
        scanf("%d",&amount);
        balance=balance-amount;
        if (balance>=0){
        printf("balance:%f",balance);
        }
        else{
            printf("insufficient balance");
            printf("\ncurrent balance:%f",balance);
        }
        break;
        default:
        printf("insufficient amount");
    }
    printf("\nacc updated");
    return 0;
}

    
   