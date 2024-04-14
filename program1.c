#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int top = -1, imp_array[SIZE];
void push()
{
    int x;
    if (top == SIZE - 1)
    {
        printf(" \n Overflow !!");
    }
    else
    {
        printf("\n Enter the element to be added anto the stach:");
        scanf("%d", &x);
        top = top + 1;
        imp_array[top] = x;
    }
}
int main()
{
    printf("\nKAGATHARA SWETA\n\n");
    push();
    printf("\n");
    return 0;
}
