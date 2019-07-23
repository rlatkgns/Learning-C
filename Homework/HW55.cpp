#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void randnumber(int(*)[4], int);
void output(int(*)[4], int);

int main()
{
	int number[3][4], size;
	size = sizeof(number) / sizeof(number[0]);
	srand((unsigned int)time (NULL));
	randnumber(number, size);
	output(number, size);
	return 0;
}

void randnumber(int(*np)[4], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 4; j++)
		{
			np[i][j] = (rand() % 9) + 1;
		}
	}
}

void output(int(*np)[4], int size)
{
	int i, j, ysum[3] = {0,}, xsum[4] = {0,};
	for (i = 0; i < size; i++)
	{
		printf("%d행:\t", i);
		for (j = 0; j < 4; j++)
		{
			printf("\t%d", np[i][j]);
			ysum[i] += np[i][j];
		}
		printf("\t'%d행'의 합: %d", i, ysum[i]);
		printf("\n");
	}
	printf("%-3s","열의 합:");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < size; j++)
		{
			xsum[i] += np[j][i];
		}
		printf(" \t%d",xsum[i]);
	}
	printf("\n");
}