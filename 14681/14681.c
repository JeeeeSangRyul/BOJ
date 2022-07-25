#include <stdio.h>

int main()
{
	int a,b;

	scanf("%d\n%d", &a, &b);
	if (a > 0 && b > 0)
	{
		printf("1\n");
		return 0;
	}
	else if (a < 0 && b > 0)
	{
		printf("2\n");
		return 0;
	}
	else if (a < 0 && b < 0)
	{
		printf("3\n");
		return 0;
	}
	else if (a > 0 && b < 0)
	{
		printf("4\n");
		return 0;
	}
	return 0;
}
