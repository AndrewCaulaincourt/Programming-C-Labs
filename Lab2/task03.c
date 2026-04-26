#include <stdio.h>

int main(void)
{
    int a, b;
    int *pa = &a;
    int *pb = &b;

    if (scanf("%d %d", &a, &b) == 2)
    {
        if (*pa > *pb)
        {
            printf("%d\n", *pa);
        }
        else
        {
            printf("%d\n", *pb);
        }
    }

    return 0;
}