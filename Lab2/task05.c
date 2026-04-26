#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0)
        return 1;

    int *arr = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL)
        return 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }

    int *p = arr + (n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p--;
    }
    printf("\n");

    free(arr);
    return 0;
}