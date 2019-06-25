/* 작성자: 김사훈
프로그램의 기능: c프로그램의 기본 구조 소개*/
#include<stdio.h>
void printNumber(int);
int main()
{
	int num;
	num = 1;
	printNumber(num);
	num = 3;
	printNumber(num);
	return 0;
}

void printNumber(int n)
{
	printf("정수값은 %d입니다.\n", n);
	return;
}
