#include<stdio.h>
#pragma warning(disable:4996)
void myflush();
int main()
{
	int a = 0, b = 0, res;
	res = scanf("%d %d", &a, &b);
	printf("a = %d, b = %d, res = %d", a, b, res);
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