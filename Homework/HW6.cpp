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
	printf("화씨 온도를 입력하세요: ");
	scanf("%d", &tempF);
	return tempF;
}

void outputC(double calcF)
{
	printf("섭씨 온도는 %.1lf도 입니다.", calcF);
	return;
}