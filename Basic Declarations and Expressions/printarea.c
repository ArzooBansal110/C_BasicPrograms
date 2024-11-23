#include <stdio.h>

int main()
{
    int l, b, a, p;
    printf("The length and width: ");
    scanf("%d %d", &l, &b);
    a = (l * b);
    printf("Area:%d\n", a);
    p = ((l + b) + (l + b));
    printf("Perimeter:%d\n", p);
    return 0;
}