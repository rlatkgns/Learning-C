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
		printf("# ���� ���� �Է��Ͻÿ� : ");
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
		printf("# �� ���� �Է��Ͻÿ� : ");
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
		printf("* %d~%d ������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��? (¦��:e/Ȧ��:o) : ", num1, num2);
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
	printf("%d~%d ������ ¦��(", num1, num2);
	for (i = num1; i <= num2; i++)
	{
		if (i % 2 == 0)
		{
			printf("%4d", i);
			sumEven += i;
		}
	}
	printf(")�� ���� %d �Դϴ�.", sumEven);
	return;
}
void calOdd(int num1, int num2)
{
	int j; int sumOdd = 0;
	printf("%d~%d ������ Ȧ��(", num1, num2);
	for (j = num1; j <= num2; j++)
	{
		if (j % 2 != 0)
		{
			printf("%4d", j);
			sumOdd += j;
		}
	}
	printf(")�� ���� %d �Դϴ�.", sumOdd);
	return;
}
void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
}