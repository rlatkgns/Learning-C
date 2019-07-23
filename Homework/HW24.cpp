#include <stdio.h>

int input();
int calday(int);
void output(int, int);

int main()
{
	int height, day;
	height = input();
	day = calday(height);
	output(height, day);

	return 0;
}

int input()
{
	int height;
	printf("* 우물의 깊이를 입력하시오(cm단위) : ");
	scanf("%d", &height);
	return height;
}

int calday(int height)
{
	int day = 0;

	while (height > 0)
	{
		height -= 50;
		day++;
		if (height > 0)
		{
			height += 20;
		}
		else
		{
			break;
		}
	}
	return day;
}

void output(int height, int day)
{
	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.", (double)height / 100, day);
	return;
}