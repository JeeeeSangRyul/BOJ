#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);
	if (a % 4 == 0)
	{
		if (a % 400 == 0)
		{
			printf("1\n");
			return 0;
		}
		else if (a % 100 == 0)
		{
			printf("0\n");
			return 0;
		}
		printf("1\n");
		return 0;
	}
	printf("0\n");
	return 0;
}
