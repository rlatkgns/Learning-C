#include<stdio.h>
int main()
{
	int history;
	int literature;
	int arts;
	printf("����, ����, ���� ������ �Է��ϼ���.: \n", history, literature, arts);
	scanf("%d", &history);
	scanf("%d", &literature);
	scanf("%d", &arts);
	int total = history + literature + arts;
	double mean = total / 3.0;
	printf("������ %d�̰� ����� %.2lf�Դϴ�.", total, mean);
	return 0;
}
