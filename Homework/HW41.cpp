#include<stdio.h>

int main()
{
	char capital;
	int i, j;
	printf("* 영문자 대문자 입력('A'~'Z'): ");
	while (scanf(" %c", &capital) == 1)
	{
		if (capital >= 'A'&&capital <= 'Z')
		{
			for (i = 0; i <= capital - 'A'; i++)
			{
				for (j = 0; j <= i; j++)
				{
					printf("%c", capital - j);
				}
				printf("\n");
			}
		}
		else
			break;
		printf("* 영문자 대문자 입력('A'~'Z'): \n");
	}
	return 0;
}