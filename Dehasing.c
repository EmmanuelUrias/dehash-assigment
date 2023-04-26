#include <stdio.h>

int main()
{
    int data;
    int x;
    int y;
    int z;
    int w;

    printf("Data: ");
    scanf(" %d", &data);

    printf("X: ");
    scanf(" %d", &x);

    printf("Y: ");
    scanf(" %d", &y);

    printf("Z: ");
    scanf(" %d", &z);

    printf("W: ");
    scanf(" %d", &w);

    int dehash = (data % x) * 1000 + (data % y) * 100 + (data % z) * 10 + (data % w);

    printf("%d", dehash);

    return 0;
}