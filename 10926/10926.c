#include <stdio.h>

int main(void)
{
    char ptr[51];
    char *str = "\?\?!";
    scanf("%s", ptr);
    printf("%s%s\n",ptr,str);
    return (0);
}