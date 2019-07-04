//#include<stdio.h>
//int main()
//{
//	printf("1234567890123456\n");
//	printf("=%10.5s=\n", "Happiness");
//	printf("=%-10.5s=\n", "Happiness");
//	printf("=%*.*s=\n", 15, 7, "Happiness");
//	return 0;
//}

#include<stdio.h>
int main()
{
	char a[20] = "Happiness";
	printf("1234567890123456\n");
	printf("=%10.5s=\n", a);
	printf("=%-10.5s=\n", a);
	printf("=%*.*s=\n", 15, 7, "Happiness"); //문자열의 정밀도는 출력하는 문자수를 의미한다.
	return 0;
}