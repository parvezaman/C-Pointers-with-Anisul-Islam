#include <stdio.h>
int main()
{
    int x = 10, y = 20, temporary;
    int *pointer_x, *pointer_y;

    printf("before\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    pointer_x = &x;
    pointer_y = &y;

    temporary = *pointer_x;
    *pointer_x = *pointer_y;
    *pointer_y = temporary;

    printf("after\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}