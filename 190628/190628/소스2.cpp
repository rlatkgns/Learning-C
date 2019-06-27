#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int weight, price;
	scanf("%d", &weight);
	if (weight <= 200)
	{
		price = 300;
	}
	else if (weight <= 400)
	{
		price = 500;
	}
	else
	{
		price = 700;
	}
	printf("%d", price);
	return 0;
}