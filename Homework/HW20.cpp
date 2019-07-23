#include<stdio.h>
#pragma warning (disable : 4996)

int inputHour();
int totalPay(int);
int calTaxes(int);
void output(int, int, int);

int main()
{
	int workHour, glossPay, taxes, netPay;
	workHour = inputHour();
	glossPay = totalPay(workHour);
	taxes = calTaxes(glossPay);
	netPay = glossPay - taxes;
	output(glossPay, taxes, netPay);
	return 0;
}

int inputHour()
{
	int hour;
	printf("*1주일간의 근무시간을 입력하시오 :");
	scanf("%d", &hour);
	return hour;
}

int totalPay(int workHour)
{
	int total;
	if (workHour <= 40)
	{
		total = workHour * 3000;
	}
	else
	{
		total = 120000 + ((workHour - 40) * 4500);
	}
	return total;
}

int calTaxes(int glossPay)
{
	int taxes;
	if (glossPay <= 100000)
	{
		taxes = (glossPay * 0.15);
	}
	else
	{
		taxes = (100000 * 0.15) + ((glossPay - 100000) * 0.25);
	}
	return taxes;
}

void output(int glossPay, int taxes, int netPay)
{
	printf("총수입 %d, 세금 %d, 실수입 %d\n", glossPay, taxes, netPay);
	return;
}
