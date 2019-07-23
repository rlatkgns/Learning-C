#pragma warning(disable:4996)
#include<stdio.h>

int main()
{
	int count = 1;
	double height;
	double total = 0;

	while (count < 6)
	{
		printf("%d번 학생의 키는?", count);
		scanf("%lf", &height);
		total += height;
		count++;

	}
	printf("%d명의 평균키는 %.1lfcm입니다.", count - 1, total / (count - 1));
	return 0;
}
