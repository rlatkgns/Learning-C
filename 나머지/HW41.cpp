#include<stdio.h>

int main()
{
	char capital;
	int i, j;
	printf("* ������ �빮�� �Է�('A'~'Z'): ");
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
		printf("* ������ �빮�� �Է�('A'~'Z'): \n");
	}
	return 0;
}