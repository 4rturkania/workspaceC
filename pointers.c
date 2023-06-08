#include <stdio.h>

int main()
{

    int x = 10;
    printf("X before change is: %d\n", x);

    int *pX = NULL;
    pX = &x;
    printf("Adress of X is: %p\n", pX);

    *pX = 20;

    printf("X after change is: %d\n", x);
}