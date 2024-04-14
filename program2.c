#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int top = -1, imp_array[SIZE];
void pop()
{
    if (top == SIZE + 1)
    {
        printf(" \n Overflow !!");
    }
    else
    {
        printf("\n popped element: %d", imp_array[top]);
        top = top - 1;
    }
}
int main()
{
    printf("\nKAGATHARA SWETA\n");
    pop();
    printf("\n\n");
    return 0;
}