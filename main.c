#include <stdio.h>

int main(void)
{
    int n;
    long total = 0;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    for (int i = 2; i <= n; i += 2)
    {
        total += i;
    }

    printf("%ld", total);

    return 0;
}
