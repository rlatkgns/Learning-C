#include <stdio.h>
#include <string.h>

void inputChar(char(*)[20]);
void output(char(*)[20]);
void sort(char ary[][20]);

int main() 
{

	char ary[5][20] = { 0, };
	inputChar(ary);
	sort(ary);
	output(ary);
	return 0;
}

void inputChar(char(*p)[20])
{
	for (int i = 1; i <= 5; i++)
	{
		printf("%d번 문자열을 입력하시오:", i);
		scanf("%s", p[i - 1]);
	}

	return;
}

void output(char(*p)[20])
{
	char first;
	char last;
	for (int i = 0; i < 5; i++)
	{
		int j = strlen(p[i]);
		first = p[i][0];
		last = p[i][j - 1];
		printf("str[%d]= %s %c %c\n", i, p[i], first, last);
	}
	return;
}

void sort(char ary[][20])
{
	int i, j, n;
	char temp[5][20] = { 0, };
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			n = strcmp(ary[i], ary[j]);
			if (n >= 1)
			{
				strcpy(temp[i], ary[i]);
				strcpy(ary[i], ary[j]);
				strcpy(ary[j], temp[i]);
			}
			else
			{
				continue;
			}
		}
	}
}