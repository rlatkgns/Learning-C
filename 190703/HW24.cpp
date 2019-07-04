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
	printf("* �칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
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
	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.", (double)height / 100, day);
	return;
}