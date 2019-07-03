#include<stdio.h>
#pragma warning(disable:4996)
void myflush();
int main()
{
	int score;
	char name[20];
	printf("성적 입력: ");
	scanf("%d", &score);
	myflush();
	printf("이름 입력: ");
	fgets(name, sizeof(name), stdin);

	printf("성적: %d점, 이름: %s\n", score, name);
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}