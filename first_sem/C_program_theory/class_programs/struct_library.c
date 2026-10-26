#include <stdio.h>
struct Book{
    int book_id;
    char title[50];
    char author[50];
    char publisher[50];
    float price;
};

int main(){
    struct Book books[3];
    printf("Enter details of 3 books:\n");
    for (int i = 0; i < 3; i++){
        printf("\nEnter Book ID: ");
        scanf("%d", &books[i].book_id);

        printf("Enter Title of Book: ");
        scanf(" %49[^\n]", books[i].title);

        printf("Enter Author Name: ");
        scanf(" %49[^\n]", books[i].author);

        printf("Enter Publisher Name: ");
        scanf(" %49[^\n]", books[i].publisher);

        printf("Enter Price: ");
        scanf("%f", &books[i].price);
    }
    printf("\n-----LIBRARY BOOK DETAILS-----\n");
    for (int i = 0; i < 3; i++){
        printf("\nBook ID: %d\n", books[i].book_id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Publisher: %s\n", books[i].publisher);
        printf("Price: %.2f\n", books[i].price);
    }
    return 0;
}