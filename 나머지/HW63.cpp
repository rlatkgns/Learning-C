#include<stdio.h>
#include<math.h>

int repeat();
int inputCount();
int check(int count, int *num);
int sort(int *temp, int count);
void arr(int count, int *num, int *temp);
void input(int count, int *num);
void output(int *res, int *num, int count);

int main()
{
	int count;
	int num[1000];
	int i, res, test;

	i = 1;
	test = repeat();
	while (i <= test)
	{
		count = inputCount();
		input(count, num);
		res = check(count, num);
		output(&res, num, count);
		i++;
	}

	return 0;
}

void input(int count, int *num)
{
	int i, n, res;

	for (i = 1; i <= count; i++)
	{
		res = scanf("%d", &n);
		if (res == 1) { num[i] = n; }
	}
	return;
}

int repeat()
{
	int re;

	printf("총 테스트 건수 : ");
	scanf("%d", &re);

	return re;
}

int inputCount()
{
	int cnt, res;

	while (1)
	{
		res = scanf("%d", &cnt);
		if (res == 1 && (cnt >= 0 && cnt <= 100)) { break; }
	}
	return cnt;
}

int check(int count, int *num)
{
	int i;
	int temp[100];
	int res;

	arr(count, num, temp);
	res = sort(temp, count);
	for (i = 0; i < (count-1); i++)
	{
		if (temp[i] != i + 1) { res = 1; return res; }
		res = 0;
	}

	return res;
}

void arr(int count, int *num, int *temp)
{
	int i, diff;

	for (i = 1; i < count; i++)
	{
		diff = num[i] - num[i + 1];
		temp[i - 1] = abs(diff);
	}
	return;
}

int sort(int *temp, int count)
{
	int i, j;
	int swap, res = 0;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j < (count - 1); j++)
		{
			if (temp[i] > temp[j])
			{
				swap = temp[i];
				temp[i] = temp[j];
				temp[j] = swap;
				res = 0;
			}
			else if (temp[i] == temp[j])
			{
				res = 1;
			}
		}
	}
	return res;
}

void output(int *res, int *num, int count)
{
	int i;

	printf("검사한 수열 : ");
	for (i = 1; i <= count; i++)
	{
		printf("%d ", num[i]);
	}
	if (*res == 1) { printf("(Not Jolly jumper)\n"); }
	else { printf("(Jolly jumper)\n"); }
	return;
}