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
	printf("=%*.*s=\n", 15, 7, "Happiness"); //���ڿ��� ���е��� ����ϴ� ���ڼ��� �ǹ��Ѵ�.
	return 0;
}