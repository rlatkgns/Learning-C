#include<stdio.h>

int main(void)
{
	int day;
	printf("* 기사의 근무일수를 입력하시오: ");
	scanf("%d", &day);

	int total = 0;
	int perDay = 1;
	int payday = 0;

	for (int i = 1; i <= day; i++)
	{
		total += perDay;
		payday++;
		if (payday == perDay)
		{
			payday = 0;
			perDay++;
		}
	}
	printf("근무일: %d일 / 총 금화 수 : %d개\n", day, total);

	return 0;
}
