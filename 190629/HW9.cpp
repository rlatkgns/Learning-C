#include<stdio.h>
int inputInteger();
int main()
{
	int number;
	number = inputInteger();
	printf("�Էµ� ���� 8������ %#o�Դϴ�.\n", number);
	printf("�Էµ� ���� 16������ %#x�Դϴ�.\n", number);
	return 0;
}

int inputInteger()
{
	int integer;
	printf("�������� �Է��ϼ���.");
	scanf("%d", &integer);
	return integer; 
}
