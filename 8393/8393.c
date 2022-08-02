#include <stdio.h>

int main()
{
    int n;
    int m;

    m = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        m = m + n;
        n--;
    }
    printf("%d\n", m);
    return 0;
}