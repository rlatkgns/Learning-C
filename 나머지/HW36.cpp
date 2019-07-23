#include<stdio.h>
int main()
{
	int a = 1, b = 1, c = 0, sum = 0;
	int i, temp;

	printf("피보나치 수열의 항수를 입력하시오 : ");
	scanf("%d", &c);

	printf("%d + %d + ", a, b);

	for (i = 1; i <= c - 2; i++)
	{
		temp = a + b;
		sum += temp;
		printf(" %d ", temp);

		a = b;
		b = temp;
		if (i == c - 2)
		{
			printf("= %d", sum + 2);
		}
		else if (i != c - 2)
		{
			printf("+");
		}

	}
	return 0;
}