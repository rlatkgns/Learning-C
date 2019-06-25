#include<stdio.h>
int printAge(int);
double printHeight(double);

int main()
{
	char name[20] = "산타클로스";
	int age = 1000;
	double height = 211.3;
	
	printf("성명: %s\n", name);
	printAge(age);
	printHeight(height);
	
	return 0;	
}

int printAge(int age)
{
	printf("나이: %d\n", age);
	return 0;
}

double printHeight(double height)
{
	printf("키: %lf\n", height);
	return 0;
}
