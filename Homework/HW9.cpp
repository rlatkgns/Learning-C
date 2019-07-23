#include<stdio.h>
int inputInteger();
int main()
{
	int number;
	number = inputInteger();
	printf("입력된 값은 8진수로 %#o입니다.\n", number);
	printf("입력된 값은 16진수로 %#x입니다.\n", number);
	return 0;
}

int inputInteger()
{
	int integer;
	printf("정수값을 입력하세요.");
	scanf("%d", &integer);
	return integer; 
}
