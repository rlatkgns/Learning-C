#include<stdio.h>
#pragma warning(disable:4996)
int inputInt();
void myflush();
int main()
{
	int age;
	age = inputInt();
	printf("age %d\n", age);
	return 0;
}

int inputInt()
{
	int n, res;
	while (1)
	{
		printf("나이입력: ");
		res = scanf("%d", &n);
		if (res == 1) { break; }
		myflush();
	}
	return n;
}
void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}