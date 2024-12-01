#include <stdio.h>

int main()
{
    int a, b, c;
    printf("input an integer: ");
    scanf("%d %d", &a, &b);
    c = a - b;
    printf("Range: %d ", c);
    return 0;
}
