#include<stdio.h>

int inputEgg(int);

int main()
{
	int egg;
	int count = 1;
	while (1)
	{
		egg = inputEgg(count);
		printf("* ���� �ް��� �� : %d\n : ", count);
		if (count == 10) 
		{
			break;
		}
		count++;
	}
	printf("*** �ް� ������ �������ϴ�.\n");
	return 0;
}

int inputEgg(int count)
{
	int egg;
	while (1)
	{
		printf("# ����� ���Ը� �Է��Ͻÿ�(���� : g) : ");
		scanf("%d", &egg);
		if (getchar() == '\n')
		{
			if (egg < 150)
			{
				printf("* ���߸��� ������ �峭���� ���ÿ�~ ^^\n");
			}
			else if (egg <= 500)
			{
				break;
			}
			else
			{
				printf("* Ÿ���� ������ �峭���� ���ÿ�~ ^^\n");
			}
		}
	}
	return egg;
}