#include <stdio.h>

int main()
{
	int i, j, line;

	printf("# 출력 라인수를 입력하시오 : ");
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