#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random(int);
void aryReset(int(*)[5]);
void arySum(int(*)[5], int*, int*, int*);
void output(int(*)[5], int, int, int);

int main()
{
	int sum1 = 0, sum2 = 0, sum3 = 0;
	int ary[5][5];
	aryReset(ary);
	arySum(ary, &sum1, &sum2, &sum3);
	output(ary, sum1, sum2, sum3);

}

int random(int n)
{
	int res;
	res = (rand() % n) + 1;
	return res;
}

void aryReset(int(*ary)[5])
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) 
		{
			ary[i][j] = random(20);
		}
	}
}

void arySum(int(*ary)[5], int *sum1, int*sum2, int*sum3)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j)
			{
				*sum1 += ary[i][j];
			}
			else if (i > j)
			{
				*sum2 += ary[i][j];
			}
			else if (i < j) 
			{
				*sum3 += ary[i][j];
			}
		}
	}
}
void output(int(*ary)[5], int sum1, int sum2, int sum3)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d¹ø Çà:", i);
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", ary[i][j]);
		}
		printf("\n");
	}
	printf("sum1 = %d\n", sum1);
	printf("sum2 = %d\n", sum2);
	printf("sum3 = %d\n", sum3);
}
