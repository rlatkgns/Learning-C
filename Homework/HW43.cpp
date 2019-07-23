#include<stdio.h>
#include<math.h>
int primeNumber(int);
int inputInt(const char *msg);

int main() 
{
	int number;
	int i;
	int cnt = 0;
	int test;
	number = inputInt("* ������ �ϳ��� �Է��Ͻÿ� : ");
	printf("1~%d������ �Ҽ� ���� ������ �����ϴ�.\n", number);

	for (i = 2; i <= number; i++)
	{
		test = primeNumber(i);
		if (test == 1) {
			printf("%-3d ", i);
			cnt++;
			if (cnt % 5 == 0) 
			{
				printf("\n");
			}
		}
	}

	printf("\n1~%d������ �Ҽ��� ������ %d���Դϴ�.\n", number, cnt);
	return 0;
}
int inputInt(const char*msg)
{
	int number;
	printf("%s", msg);
	scanf("%d", &number);
	return number;
}

int primeNumber(int num) 
{
	int sqrtnum;
	int i, cnt = 0;
	sqrtnum = (int)sqrt((double)num);

	for (i = 2; i <= sqrtnum; i++)
	{
		if (num%i == 0) 
		{
			cnt++;
		}
	}
	if (cnt == 0)
	{
		return 1;
	}
	else
		return 0;
}