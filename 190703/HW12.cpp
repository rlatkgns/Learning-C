#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("이름을 입력하시오 :");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	printf("\"%s\"\n", str);
	printf("\"%20s\"\n", str);
	printf("\"%-20s\"", str);
	return 0;
}