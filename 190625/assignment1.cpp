#include<stdio.h>
int printAge(int);
double printHeight(double);

int main()
{
	char name[20] = "��ŸŬ�ν�";
	int age = 1000;
	double height = 211.3;
	
	printf("����: %s\n", name);
	printAge(age);
	printHeight(height);
	
	return 0;	
}

int printAge(int age)
{
	printf("����: %d\n", age);
	return 0;
}

double printHeight(double height)
{
	printf("Ű: %lf\n", height);
	return 0;
}
