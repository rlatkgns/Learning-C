#include <stdio.h>

int main()
{
	int i, j, line;

	printf("# ��� ���μ��� �Է��Ͻÿ� : ");
	scanf("%d", &line);

	for (i = 1; i <= line; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		for (j = 1; j <= 2 * line - 2 * i + 2; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}