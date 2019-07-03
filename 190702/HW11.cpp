#include<stdio.h>
int main()
{
	int codeValue = 0;
	printf("ASCII code값을 입력하시오:");
	scanf("%d", &codeValue);
	printf("%d은 '%c'의 ASCII code입니다.", codeValue, codeValue);
	return 0;
}