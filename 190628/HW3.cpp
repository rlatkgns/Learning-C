#include<stdio.h>
int main()
{
	int time;
	printf("�ʸ� �Է��ϼ���.:");
	scanf("%d", &time);
	int hour = time / 3600;
	int minute = (time - (hour * 3600)) / 60;
	int sec = (time - (hour * 3600) - (minute * 60));
	
	printf("%d �ʴ� %d�ð� %d�� %d�� �Դϴ�", time, hour, minute, sec);
	
	return 0;
}
