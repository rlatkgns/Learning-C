#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num, res;
	char ch, str[20];
	printf("input number, character, string:");
	res = scanf("%d%c%s", &num, &ch, str); // %c�� �տ� space�� ������ ���� ���� ����� �ٸ��� ���´�.
	printf("number : %d\t character : %c\t string : %s\n", num, ch, str);
	printf("res = %d\n", res);
	return 0;
}