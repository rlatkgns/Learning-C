#include<stdio.h>
int main()
{
	int x = 12345;
	printf("1234567890\n");
	printf("=%d=\n", x);
	printf("=%8d=\n", x);
	printf("=%-8d=\n", x);
	printf("=%3d=\n", x); // int 안에 있는 값보다 필드폭 값이 작으면 무시되서 출력된다.
	return 0;
}