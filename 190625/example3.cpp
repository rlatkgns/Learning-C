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
	printf("*나이를 입력하세요: ");
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
	printf("나이는 %d살이고, 살아온 총날 수는 약 %d일 입니다.\n", num, tot);
	return;
}
