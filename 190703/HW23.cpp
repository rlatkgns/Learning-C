#include<stdio.h>

int main() 
{
	int num1, num2;
	int returnValue = 0;
	int result = 0;
	while (1)
	{
		printf("# �ΰ��� ������ �Է��ϼ��� :");
		returnValue = scanf("%d %d", &num1, &num2);
		if (returnValue != 2)
		{
			break;
		}
		if (num1 > num2)
		{
			result = num1 - num2;
			printf("%d - %d = %d\n", num1, num2, result);
		}
		else
		{
			result = num2 - num1;
			printf("%d - %d = %d\n", num2, num1, result);
		}
	}
	return 0;
}
