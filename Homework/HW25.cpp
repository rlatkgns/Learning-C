#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int input();
int output(int, int);
int random(int);
void myflush();

int main()
{
	int num, count;
	int max = 100;
	int min = 0;
	int i = 0;
	srand((unsigned int)time(NULL));

	num = random(100) + 1;

	while (1)
	{
		count = input();
		if (count == num)
		{
			printf("우와~맞았당~~~추카추카~~%d번째 만에 맞추셨습니다.\n", i);
			break;
		}
		else { output(num, count); }
		i++;
	}
	return 0;
}

int input() 
{
	int count;

	while (1)
	{
		printf("#숫자를 입력하시오 :");
		scanf("%d", &count);
		myflush();
		if (count >= 1 && count <= 100)
		{
			break;
		}
	}
	return count;
}

int output(int num, int count)
{
	int max = 100;
	int min = 0;
	if (num > count)
	{
		min = count;
		printf("%d보다는 크고 %d보다는 작습니다.\n", count, max);
	}
	else if (num < count) 
	{
		max = count;
		printf("%d보다는 크고 %d보다는 작습니다.\n", min, count);
	}
	return 0;
}

int random(int n)
{
	int res;
	res = rand() % n;
	return res;
}

void myflush()
{
	while (getchar() != '\n')
		;
}
