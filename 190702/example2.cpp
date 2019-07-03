#include<stdio.h>
#pragma warning(disable:4996)
void myflush();
int main()
{
	int a = 0, b = 0, res;
	int c;
	printf("정수 2개 입력: ");
	res = scanf("%d %d", &a, &b);
	printf("a = %d, b = %d, res = %d", a, b, res);

	myflush();

	printf("정수 1개 입력: ");
	res = scanf("%d", &c);
	printf("%d %d"
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}