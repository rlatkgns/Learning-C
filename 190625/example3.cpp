#include<stdio.h>
#define DAYS 365
int input(void);
void output(int, int);
int calculate(int, int);
int main()
{
	int number;
	int result;
	
	number = input();
	result = calculate(number, DAYS);
	output(number, result);
	
	return 0;
}

int input(void)
{
	int num;
	printf("*���̸� �Է��ϼ���: ");
	scanf("%d", &num);
	return num;
}

int calculate(int num, int days)
{
	int totalDays;
	totalDays = num * days;
	return totalDays;
}

void output(int num, int tot)
{
	printf("���̴� %d���̰�, ��ƿ� �ѳ� ���� �� %d�� �Դϴ�.\n", num, tot);
	return;
}
