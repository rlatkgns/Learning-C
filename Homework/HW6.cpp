#include<stdio.h>
#pragma warning(disable:4996)
double input();
double input
void outputC(double);

int main()
{
	double temp = inputF();
	double calcF = ((double)5 / 9) * (temp - 32);
	outputC(calcF);
	return 0;
}

int inputF()
{
	int tempF;
	printf("ȭ�� �µ��� �Է��ϼ���: ");
	scanf("%d", &tempF);
	return tempF;
}

void outputC(double calcF)
{
	printf("���� �µ��� %.1lf�� �Դϴ�.", calcF);
	return;
}