#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int imp_array[SIZE];
int rear = -1;
int front = -1;
void enqueue()
{
    int insert_item;
    if (rear == SIZE - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("Element to be insert in the Queue:");
        scanf("%d", &insert_item);
        rear = rear + 1;
        imp_array[rear] = insert_item;
    }
}
int main()
{
    int ch;
    printf("\nKAGATHARA SWETA\n\n");
    while (1)
    {
        printf("1. dequeue Operation\n");
        printf("2. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            exit(0);
            break;
        default:
            printf("Invalid choice \n");
            break;
        }
    }
    printf("\n");
    return 0;
}