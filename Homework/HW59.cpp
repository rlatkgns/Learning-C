#include<stdio.h>

int cal(int*, int);
void myflush();

int main()
{
	int num, cnt;
	int arr[100];
	while (1)
	{
		while (1)
		{
			printf("* �Է��� ������ ���� : ");
			if (scanf("%d", &num) != 1)
			{
				break;
			}
			if (num >= 2 || num <= 1000)
			{
				break;
			}
		}
		myflush();
		printf("* ���� �Է� :");
		for (int i = 0; i < num; i++)
		{
			if (scanf("%d", &arr[i]) != 1)
				break;
			if (arr[i] <= 1 && arr[i] >= 10000)
				return 0;
		}
		myflush();
		cnt = cal(arr, num);
		printf("���� �ٸ� ���� ���� :%d\n\n", cnt);

	}
	return 0;
}

int cal(int *arr, int num)
{
	int cnt = 0;
	for (int i = 1; i <= num; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[i] == arr[j])
			{
				cnt--;
				break;
			}
		}
		cnt++;
	}
	return cnt;
}

void myflush()
{
	while (1)
	{
		if (getchar() == '\n')
			break;
	}
}