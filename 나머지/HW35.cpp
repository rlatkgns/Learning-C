#include <stdio.h>
int main(void)
{
	int sum = 0, i, num = 0;
	int count = 0;
	int res = 0;
	for (i = 1; i <= 5; i++)
	{
		printf("0 ���� ū���� �Է��Ͻÿ�(%d��°) : ", i);
		scanf("%d", &num);
		if (num > 0)
		{
			sum += num;
		}
		else
		{
			i--;
		}

	}
	printf("�Էµ� ���� ���� : %d \n", sum);
	return 0;
}