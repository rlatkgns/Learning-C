#include<stdio.h>
#pragma warning(disable:4996)
int inputInt(const char *msg);
void myflush();
int main()
{
	int age;
	int score;
	age = inputInt("나이입력: ");
	printf("age = %d\n", age);

	score = inputInt("성적입력: ");
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
		if (getchar() == '\n') { break; } // 숫자만 정상적으로 입력되었으면 가능
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