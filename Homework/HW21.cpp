#pragma warning(disable:4996)
#include<stdio.h>

int main()
{
	int count = 1;
	double height;
	double total = 0;

	while (count < 6)
	{
		printf("%d�� �л��� Ű��?", count);
		scanf("%lf", &height);
		total += height;
		count++;

	}
	printf("%d���� ���Ű�� %.1lfcm�Դϴ�.", count - 1, total / (count - 1));
	return 0;
}
