#include<stdio.h>
void func1();
void func2();
void func3();
void func4();

int main()
{
	func2();
	func1();
	return 0;
}

void func1()
{
	printf("func1()�Լ� ������...\n");
	func3();
	return;
}
void func2()
{
	printf("func2()�Լ� ������...\n");
	return;
}
void func3()
{
	printf("func3()�Լ� ������...\n");
	return;
}
void func4()
{
	printf("func1()�Լ� ������...\n");
	return;
}
