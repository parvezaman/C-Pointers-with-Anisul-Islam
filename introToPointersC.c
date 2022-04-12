#include <stdio.h>
int main()
{
    int x = 5;
    int y = 5;
    int *pointer_x;

    pointer_x = &x;

    printf("value of x = %d\n", x);
    printf("address of x = %d\n", &x);
    printf("address of y = %d\n", &y);
    printf("the value of pointer_x = %d\n", pointer_x);
    printf("the value of x = %d\n", *pointer_x);

    return 0;
}