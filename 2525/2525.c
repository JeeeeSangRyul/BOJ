#include <stdio.h>

int main()
{
  int a,b,c;

  scanf("%d %d\n%d", &a, &b, &c);
  if (b + c < 60)
    printf("%d %d\n", a, b + c);
  else
  {
    b = b + c;
    int d = b / 60;
    b = b - (d * 60);
    a = a + d;
    if (a >= 24)
      a = a - 24;
    printf("%d %d\n", a, b);
  }
  return 0;
}
