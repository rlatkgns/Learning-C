#include <stdio.h>
int main(void)
{
	int i, j, k = 1;
	for (i = 1; i <=9; i++)
	{
		for (j = 2; j <= 5; j++)
		{
			printf("%2d*%2d = %2d ", j, i, j*i);
		}
		printf("\n");

	}

	printf("\n");


	for (i = 1; i <= 9; i++)
	{
		for (j = 6; j <= 9; j++)
		{
			printf("%2d*%2d = %2d ", j, i, j*i);
		}
		printf("\n");

	}

	printf("-----------------------------------------------------\n");
	int a, b, c;

	for (c = 1; c <= 2; c++)
	{
		for (b = 1; b <= 9; b++)
		{
			for (a = 2 + 4 * (c - 1); a <= 2 + 4 * (c - 1) + 3; a++)
			{
				printf("%2d*%2d = %2d ", a, b, a*b);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}