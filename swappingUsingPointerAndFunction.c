#include <stdio.h>

void swap(int *pointer_x, int *pointer_y)
{
    int temporary;

    temporary = *pointer_x;
    *pointer_x = *pointer_y;
    *pointer_y = temporary;
}

int main()
{
    int x = 10, y = 20;

    printf("before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);
    printf("After swapping: x = %d, y = %d", x, y);

    return 0;
}