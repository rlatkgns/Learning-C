#include<stdio.h>
#pragma warning(disable:4996)
double inputDistance();
double inputVelocity();
int main()
{
	double km = inputDistance();
	double kmH = inputVelocity();
	double hour = km / kmH;
	int ihour = (int)hour;
	double min = (hour - ihour) * 60;
	int imin = (int)min;
	double sec = (min - imin) * 60;
	printf("%.2lfkm => %d시간 %d분 %.3lf초 소요됨", km, ihour, imin, sec);
	return 0;
}

double inputDistance()
{
	double distance;
	printf("거리를 입력하시오.(km단위)");
	scanf("%lf", &distance);
	return distance;
}

double inputVelocity()
{
	double velocity;
	printf("시속을 입력하시오.(km/h단위)");
	scanf("%lf", &velocity);
	return velocity;
}  