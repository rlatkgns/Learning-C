/* �ۼ���: �����
���α׷��� ���: c���α׷��� �⺻ ���� �Ұ�*/
#include<stdio.h>
void printNumber(int);
int main()
{
	int num;
	num = 1;
	printNumber(num);
	num = 3;
	printNumber(num);
	return 0;
}

void printNumber(int n)
{
	printf("�������� %d�Դϴ�.\n", n);
	return;
}
