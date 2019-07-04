#include<stdio.h>
int main()
{
	int x = 10, y = 010, z = 0x10;
	printf("10은 %#o(8)와 같고 %#x(16)와 같다\n", x, x);
	printf("010(8)은 %d와 같고 %#x(16)와 같다\n", y, y);
	printf("0x10는 %#o(8)와 같고 %d와 같다\n", z, z);
	return 0;
}