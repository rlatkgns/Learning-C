#include <stdio.h>
int main(void)
{
	int sum = 0, i, num = 0;
	int count = 0;
	int res = 0;
	for (i = 1; i <= 5; i++)
	{
		printf("0 보다 큰수를 입력하시오(%d번째) : ", i);
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
	printf("입력된 값의 총합 : %d \n", sum);
	return 0;
}