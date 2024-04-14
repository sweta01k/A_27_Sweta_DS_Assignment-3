#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int imp_array[SIZE];
int rear = -1;
int front = -1;
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Underflow\n");
        return;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("Element deleted from the Queue:");
        scanf("%d", &imp_array[front]);
        front = front + 1;
    }
}
int main()
{
    int ch;
    printf("\nKAGATHARA SWETA\n\n");
    while (1)
    {
        printf("1. Dequeue Operation\n");
        printf("2. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            dequeue();
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