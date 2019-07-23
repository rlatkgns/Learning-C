// HW13 이름의 글자수 뒷문자에 맞춰 출력하기
// 작성자 : 렉토피아 정혜경 강사
#pragma warning (disable : 4996)
#include<stdio.h>
#include<string.h>
int main()
{
	char firstName[20], lastName[20];
	unsigned int firstLen, lastLen;

	printf("# 성을 입력하시오: "); 
	scanf("%s", lastName);
	printf("# 이름을 입력하시오: ");
	scanf("%s", firstName);
	firstLen = strlen(firstName);
	lastLen = strlen(lastName);
	printf("%s %s\n", lastName, firstName);
	printf("%*u %*u\n", lastLen, lastLen, firstLen, firstLen);
	return 0;
}