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
	printf("%.2lfkm => %d�ð� %d�� %.3lf�� �ҿ��", km, ihour, imin, sec);
	return 0;
}

double inputDistance()
{
	double distance;
	printf("�Ÿ��� �Է��Ͻÿ�.(km����)");
	scanf("%lf", &distance);
	return distance;
}

double inputVelocity()
{
	double velocity;
	printf("�ü��� �Է��Ͻÿ�.(km/h����)");
	scanf("%lf", &velocity);
	return velocity;
}  