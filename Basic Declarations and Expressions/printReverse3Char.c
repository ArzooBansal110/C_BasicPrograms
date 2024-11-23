#include <stdio.h>
int main()
{
    char c1, c2, c3;
    scanf("%c", &c1);//A
    scanf("%c", &c2);//B
    scanf("%c", &c3);//C

    printf("%c", c3);//C
    printf("%c", c2);//B
    printf("%c", c1);//A
    printf("\n");
    return 0;
}
