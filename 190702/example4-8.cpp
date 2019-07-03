#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num, res;
	char ch, str[20];
	printf("input number, character, string:");
	res = scanf("%d%c%s", &num, &ch, str); // %c에 앞에 space의 유무의 따라 값의 결과가 다르게 나온다.
	printf("number : %d\t character : %c\t string : %s\n", num, ch, str);
	printf("res = %d\n", res);
	return 0;
}