#include<stdio.h>
void scope(int *num1, int *num2);
char putEorO(int num1, int num2);
void calEven(int num1, int num2);
void calOdd(int num1, int num2);
void myflush();

int main()
{
	int num1, num2;
	char ch;

	scope(&num1, &num2);
	ch = putEorO(num1, num2);

	if (ch == 'e')
	{
		calEven(num1, num2);
	}
	else
	{
		calOdd(num1, num2);
	}

	return 0;
}
void scope(int *num1, int *num2)
{
	int res1, res2;
	while (1)
	{
		printf("# 시작 값을 입력하시오 : ");
		res1 = scanf("%d", num1);
		if (num1 > 0 && res1 != 0)
		{
			break;
		}
		else
		{
			myflush();
		}
	}

	while (1)
	{
		printf("# 끝 값을 입력하시오 : ");
		res2 = scanf("%d", num2);
		if (*num2 > *num1 && res2 != 0)
		{
			break;
		}
		else
		{
			myflush();
		}
	}
	return;
}
char putEorO(int num1, int num2)
{
	char a;
	while (1)
	{
		printf("* %d~%d 까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요? (짝수:e/홀수:o) : ", num1, num2);
		scanf(" %c", &a);
		if (a == 'e' || a == 'o')
		{
			break;
		}
		else { myflush(); }
	}
	return a;
}
void calEven(int num1, int num2)
{
	int i; int sumEven = 0;
	printf("%d~%d 까지의 짝수(", num1, num2);
	for (i = num1; i <= num2; i++)
	{
		if (i % 2 == 0)
		{
			printf("%4d", i);
			sumEven += i;
		}
	}
	printf(")의 합은 %d 입니다.", sumEven);
	return;
}
void calOdd(int num1, int num2)
{
	int j; int sumOdd = 0;
	printf("%d~%d 까지의 홀수(", num1, num2);
	for (j = num1; j <= num2; j++)
	{
		if (j % 2 != 0)
		{
			printf("%4d", j);
			sumOdd += j;
		}
	}
	printf(")의 합은 %d 입니다.", sumOdd);
	return;
}
void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}