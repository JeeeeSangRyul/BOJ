#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);
    if (a <= 100 && a >= 90)
        printf("A\n");
    else if (a <= 89 && a >= 80)
        printf("B\n");
    else if (a <= 79 && a >= 70)
        printf("C\n");
    else if (a <= 69 && a >= 60)
        printf("D\n");
    else
        printf("F\n");
    return 0;
}