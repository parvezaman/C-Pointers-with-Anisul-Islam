#include <stdio.h>

int main()
{
    int x = 3, y = 34;

    int *pointer_x;
    pointer_x = &x;
    int *pointer_y;
    pointer_y = &y;

    printf("%d + %d = %d", *pointer_x, *pointer_y, *pointer_x + *pointer_y);
}