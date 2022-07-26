#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (b >= 45)
    {
        printf("%d %d\n", a, b - 45);
        return 0;
    }
    else
    {
        if (a == 0)
            a = 24;
        a = a - 1;
        b = b + 60;
        printf("%d %d\n", a, b - 45);
        return 0;
    }
    return 0;
}