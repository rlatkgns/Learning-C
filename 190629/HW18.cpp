#include<stdio.h>
int input1(int);
int input2(int);
void output(int, int, int);

int main()
{
	int i;
    for (i = 0; i < 2; i++)
	{
    	int age, num, price;
    	age = input1(age);
    	num = input2(num);
    	output(age, num, price);
	}
    return 0;
}

int input1(int age)
{
	printf("입장객의 나이를 입력하시오 : ");
	scanf("%d", &age);
	return age;
}

int input2(int num)
{
    printf("입장객의 수를 입력하시오 : ");
    scanf("%d", &num);
    return num;
}
 
void output(int age, int num, int price)
{
   if (age <= 7)
   {
       price = 500;
   }
   else if (age <= 13)
   {
       price = 700;
   }
   else if (age <= 19)
   {
       price = 1000;
   }
   else if (age <= 55)
   {
       price = 1500;
   }
   else
   {
       price = 500;
   }
   printf("입장료 => %d원\n", price * num);
    
   int sale;
	if (num >= 5)
    {
		sale = ((price * num) * 0.1);
    }
    else
    {
       sale = 0;
    }
    printf("할인금액 => %d원\n", sale);
    printf("결제금액 => %d원\n", ((price * num) - sale));
    return;
 }
