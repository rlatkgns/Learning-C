#include<stdio.h>
#pragma warning(disable:4996)
int inputInt();
void myflush();
int main()
{
	int i = 1, num;
	printf("# �������� �Է��ϼ��� : ");
	num = inputInt();

	while (i <= num)
	{
		printf("*");
		if (i % 5 == 0) printf("\n");
		i++;
	}
	printf("\n");
	return 0;
}
int inputInt()
{

	int num, res;

	while (1) {

		res = scanf("%d", &num);

		if (res != 1)
		{
			printf("#�������� �Է��ϼ��� : ");
			myflush();
		}
		else break;
	}
	return num;
}

void myflush()
{
	while (getchar() != '\n') 
	{
		;
	}
}