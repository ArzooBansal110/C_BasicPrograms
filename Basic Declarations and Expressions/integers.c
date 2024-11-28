#include<stdio.h>

int main()
{
    int p, q, r, s;
    printf("q:  \nr:  \ns:  \n  p:  \n");
    scanf("%d %d %d %d",&q,&r,&s,&p);

    if (q > r && s > p)
    {
        if (r + s > q + p)
        {
            printf("Correct Value");
        }
        else
        {
            printf("Wrong Value");
        }
    }
    return 0;
}
