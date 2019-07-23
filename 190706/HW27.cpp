#include<stdio.h>

int inputEgg(int);

int main()
{
	int egg;
	int count = 1;
	while (1)
	{
		egg = inputEgg(count);
		printf("* 현재 달걀의 수 : %d\n : ", count);
		if (count == 10) 
		{
			break;
		}
		count++;
	}
	printf("*** 달걀 포장이 끝났습니다.\n");
	return 0;
}

int inputEgg(int count)
{
	int egg;
	while (1)
	{
		printf("# 계란의 무게를 입력하시오(단위 : g) : ");
		scanf("%d", &egg);
		if (getchar() == '\n')
		{
			if (egg < 150)
			{
				printf("* 메추리알 가지고 장난하지 마시오~ ^^\n");
			}
			else if (egg <= 500)
			{
				break;
			}
			else
			{
				printf("* 타조알 가지고 장난하지 마시오~ ^^\n");
			}
		}
	}
	return egg;
}