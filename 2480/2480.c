#include <stdio.h>

int find_bigInt(int a, int b, int c)
{
  int tmp[] = {a, b, c};
  int temp;
  int i = 0;
  int j;

  while (i < 3)
  {
    j = i;
    while (j < 3)
    {
      if(tmp[i] > tmp[j])
      {
        temp = tmp[i];
        tmp[i] = tmp[j];
        tmp[j] = temp;
      }
      j++;
    }
    i++;
  }
  return (tmp[2]);
}

int main()
{
  int a,b,c,d;

  scanf("%d %d %d", &a, &b, &c);
  if (a == b && b == c && c == a)
    printf("%d\n", 10000 + (a * 1000));
  else if (a == b || b == c || c == a)
  {
    if (a == b)
      printf("%d\n", 1000 + (a * 100));
    else if (b == c)
      printf("%d\n", 1000 + (b * 100));
    else if (c == a)
      printf("%d\n", 1000 + (c * 100));
  }
  else
  {
    d = find_bigInt(a,b,c);
    printf("%d\n", d * 100);
  }
  return 0;
}
