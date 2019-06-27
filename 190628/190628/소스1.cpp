#include<stdio.h>
#pragma warning (disable:4996)
int main()
{
	int weight;
	scanf("%d", &weight);
	if (weight >= 300)
	{
		printf("사과가격 1000원");
	}
	else
	{
		printf("사과가격 500원");
	}
	return 0;
}