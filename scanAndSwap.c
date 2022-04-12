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
    int x, y;
    printf("input first number : ");
    scanf("%d", &x);
    printf("input second number : ");
    scanf("%d", &y);

    printf("before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);
    printf("after swapping: x = %d, y = %d", x, y);

    return 0;
}