#include<stdio.h>
int main()
{

	int ary[] = { 1,2,3,4,5,6,7,8 };
	int size, i, temp;
	size = sizeof(ary) / sizeof(ary[0]);
	printf("ó�� �迭�� ����� �� : ");
	for (i = 0; i < size; i++)

	{
		printf("%d ", ary[i]);
	}
	printf("\n");

	for (i = 0; i < size / 2; i++)
	{
		temp = ary[i];
		ary[i] = ary[size - i - 1];
		ary[size - i - 1] = temp;
	}
	printf("�ٲ� �迭�� ����� �� : ");

	for (i = 0; i < size; i++)
	{
		printf("%d ", ary[i]);
	}
	return 0;
}
