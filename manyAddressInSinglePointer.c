#include <stdio.h>

int main()
{
    int x = 10, y = 20, z = 30;
    int *pointer;

    pointer = &x;
    printf("the value of x = %d\n", *pointer);

    pointer = &y;
    printf("the value of y = %d\n", *pointer);

    pointer = &z;
    printf("the value of z = %d\n", *pointer);

    return 0;
}