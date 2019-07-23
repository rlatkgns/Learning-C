#include <stdio.h>

int main()
{
	int n, i = 31, res;
	unsigned int check = 0x80000000;;

	printf("*10진 정수를 입력하시오: ");
	scanf("%d", &n);
	printf("%d(10) = ", n);
	check;
	res = 0;

	for (i = 0; i < 32; i++)
	{
		res = check >> i;
		if ((res & n) != 0)
			putchar('1');
		else
			putchar('0');

	}
	printf("(2)\n");
	return 0;
}