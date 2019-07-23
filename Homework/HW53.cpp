#include<stdio.h>
#include<string.h>


void inputchar(char*);
int check(char*);
void output(char *, int);

int main()
{
	int res;
	char ary[10];
	while (1) 
	{
		inputchar(ary);
		if (strcmp(ary, "end") == 0) { break; }
		res = check(ary);
		output(ary, res);
		printf("\n");
	}
	return 0;
}

void inputchar(char*p)
{
	printf("# 단어 입력:");
	scanf("%s", p);
}

int check(char*p)
{
	int n;
	int i;
	n = strlen(p);

	for (i = 0; i < n / 2; i++)
	{
		if (p[i] == p[n - i - 1])
		{
			;
		}
		else { return 0; }
	}
	return 1;

}

void output(char*p, int r)
{
	if (r == 1)
	{
		printf("%s: 회문입니다!", p);

	}
	else
	{
		printf("%s: 회문이 아닙니다!", p);

	}
	return;
}