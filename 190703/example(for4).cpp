#include<stdio.h> // 550�� ����
int main()
{
	int i, j=0;
	for (i = 1; i <= 10; i++)
	{
		int s = 0;
		for (j = 1; j <= (i*10) ; j++)
		{
			s += j; //550ȸ ����
		}
		printf("1 ~ %d = %d\n", (i*10), s);
	}
	return 0;
}
//#include<stdio.h>// 100�� ����
//int main()
//{
//	int i, j, s=0;
//	for (i = 10; i <= 100; i+=10) //10ȸ
//	{
//		for (j = (i-9); j <= i; j++) //10ȸ
//		{
//			s += j;//100ȸ ����
//		}
//		printf("1 ~ %d = %d\n", i, s);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += i;
//		if ((i % 10) == 0)
//		{
//			printf("1 ~ %d = %d\n", i, sum);
//		}
//	}
//	return 0;
//}