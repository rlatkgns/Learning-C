#include<stdio.h>
#pragma warning(disable:4996)
int inputInt(const char *msg);
void myflush();
int main()
{
	int age;
	int score;
	age = inputInt("�����Է�: ");
	printf("age = %d\n", age);

	score = inputInt("�����Է�: ");
	printf("socre = %d\n", score);
	return 0;
}

int inputInt(const char *msg)
{
	int n;
	while (1)
	{
		printf("%s", msg);
		scanf("%d", &n);
		if (getchar() == '\n') { break; } // ���ڸ� ���������� �ԷµǾ����� ����
		myflush();
	}
	return n;
}
void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}