#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("�̸��� �Է��Ͻÿ� :");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	printf("\"%s\"\n", str);
	printf("\"%20s\"\n", str);
	printf("\"%-20s\"", str);
	return 0;
}