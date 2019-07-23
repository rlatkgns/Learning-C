#include<stdio.h>
#pragma warning(disable:4996)
double input();
void output(double);
int main()
{
	int basicCharge = 660;
	double perCharge = 88.5;
	double elecC = input();
	double totalCharge = basicCharge + (elecC * perCharge);
	double tax = totalCharge * 0.09;
	double finalTot = totalCharge + tax;
	output(finalTot);
	return 0;
}

double input()
{
	double elecConsumption;
	printf("전기 사용량을 입력하세요(kw): ");
	scanf("%lf", &elecConsumption);
	return elecConsumption;
}

void output(double finalTot)
{
	printf("전기 사용요금은 %lf원 입니다.", finalTot);
	return;
}