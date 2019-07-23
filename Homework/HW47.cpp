#include<stdio.h>

void input();
double max(double *num);
double min(double *num);
void output(double *num);

int main()
{
	input();
	return 0;
}
void input()
{
	double num[5];
	for (int i = 0; i <= 4; i++)
	{
		while (1)
		{
			double check;
			printf("%d번 방 값 : ", i);
			check = scanf("%lf", &num[i]);
			while (getchar() != '\n');
			if (check == 1)
			{
				break;
			}
		}
	}
	output(num);
}
double max(double *num)
{
	double c = num[0];
	for (int i = 1; i <= 4; i++)
	{
		if (c < num[i])
			c = num[i];
	}
	return c;
}
double min(double *num)
{
	{
		double c = num[0];
		for (int i = 1; i <= 4; i++)
		{
			if (c > num[i])
				c = num[i];
		}
		return c;
	}
}
void output(double *num)
{
	printf("가장 큰 값 : %.2lf\n", max(num));
	printf("가장 작은 값 : %.2lf", min(num));
}