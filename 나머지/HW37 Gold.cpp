#include<stdio.h>

int main(void)
{
	int day;
	printf("* ����� �ٹ��ϼ��� �Է��Ͻÿ�: ");
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
	printf("�ٹ���: %d�� / �� ��ȭ �� : %d��\n", day, total);

	return 0;
}
