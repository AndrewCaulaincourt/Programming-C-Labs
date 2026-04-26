#include <stdio.h>

int main(void)
{
    int a, b;
    int *pa = &a;
    int *pb = &b;
    if (scanf("%d %d", &a, &b) == 2)
    {

        printf("%d\n", *pa + *pb);
    }
    return 0;
}