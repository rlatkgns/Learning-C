#include<stdio.h>
int input(int *dataArray);
void printArray(int *dataArray, int num);
void sort(int *dataArray, int num);

int main()
{
	int tc;
	int num;
	int dataArray[100];
	int i, j;
	freopen("c:\\data\\hw52_sortData.txt", "rt", stdin);
	scanf("%d", &tc);
	for (i = 0; i < tc; i++)
	{

		printf("# 소트 전 데이터 : ");
		num = input(dataArray);
		for (j = 0; j < num; j++)
		{
			printf(" %d", dataArray[j]);
		}
		printf("\n");
		printArray(dataArray, num);

	}

	return 0;
}

int input(int *dataArray) 
{
	int num = 0;
	while (1) 
	{
		scanf("%d", &dataArray[num]);
		if (dataArray[num] == 0) { break; }
		num++;
	}
	return num;
}

void printArray(int *dataArray, int num)
{
	int j;
	printf("# 소트 후 데이터 : ");
	sort(dataArray, num);
	for (j = 0; j < num; j++)
	{
		printf(" %d", dataArray[j]);
	}
	printf("\n");
}


void sort(int *dataArray, int num) 
{
	int temp;
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i + 1; j < num; j++) 
		{
			if (dataArray[i] > dataArray[j])
			{
				temp = dataArray[i];
				dataArray[i] = dataArray[j];
				dataArray[j] = temp;
			}
		}
	}
}