#include <stdio.h>
#include <string.h>
#include <math.h>

void myflush();
void input(char *);
int cal(char *);
void output(char *, int);

int main() {
	char ary[100];
	int sum;
	while (1)
	{
		input(ary);
		if (strcmp(ary, "end") == 0) { break; }
		sum = cal(ary);
		output(ary, sum);
		printf("\n");
	}
	return 0;
}

void input(char *ary) 
{
	while (1) {
		printf("# ������ �Է��Ͻÿ�:");
		scanf("%s", ary);
		if (getchar() == '\n') { break; }
		myflush();
	}
	return;
}

int cal(char *ary) 
{
	int i, j, k, temp, sum = 0, num = 0;
	int len = strlen(ary);
	for (i = 0; i <= len; ++i)
	{
		temp = ary[i] - '0';
		if (temp >= 0 && temp <= 9)
		{
			++num;
		}
		else {
			for (j = 0, k = i; num > 0; --num, --k, ++j) 
			{
				sum = sum + ((ary[k - 1] - '0') * pow(10, j));
			}
			num = 0;
		}
	}
	return sum;
}

void output(char *ary, int sum)
{
	printf(" \"%s\" ���� �� ���ڴ� [%d]�Դϴ�.\n", ary, sum);
	return;
}

void myflush() {
	while (getchar() != '\n') 
	{
		;
	}
	return;
}