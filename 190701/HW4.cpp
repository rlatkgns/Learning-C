#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	double day = 365.2422;
	int iday = (int)day; // 365
	double time = (day - iday) * 24;
	int itime = (int)time; //5
	double minute = (time - itime) * 60;
	int iminute = (int)minute; //48
	double sec = (minute - iminute) * 60;
	printf("%.4lf일은 %d일 %d시간 %d분 %.2lf초입니다.", day, iday, itime, iminute, sec);
	return 0;
}