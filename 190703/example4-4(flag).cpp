#include<stdio.h>
int main()
{
	int x = 10, y = 010, z = 0x10;
	printf("10�� %#o(8)�� ���� %#x(16)�� ����\n", x, x);
	printf("010(8)�� %d�� ���� %#x(16)�� ����\n", y, y);
	printf("0x10�� %#o(8)�� ���� %d�� ����\n", z, z);
	return 0;
}