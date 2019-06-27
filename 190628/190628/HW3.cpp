#include<stdio.h>
int main()
{
	int time;
	printf("초를 입력하세요.:");
	scanf("%d", &time);
	int hour = time / 3600;
	int minute = (time - (hour * 3600)) / 60;
	int sec = (time - (hour * 3600) - (minute * 60));
	
	printf("%d 초는 %d시간 %d분 %d초 입니다", time, hour, minute, sec);
	
	return 0;
}
