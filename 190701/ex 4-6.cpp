#pragma warning(disable:4996)
#include<stdio.h>
void myflush();
int main()
{
	int a=0, b=0, c=0, result, total;
	printf("정수 세개를 입력하시오: ");
	result = scanf("%d %d %d", &a, &b, &c);
	if(result == 3)
	{
		total = a + b + c;
		printf("세값의 합은 %d입니다.\n", total);
	}
	else
	{
	    myflush();
		printf("입력데이터 오류입니다.\n");
	}
	printf("scanf()함수의 리턴값: %d\n", result);
	result = scanf("%d", &a);
	printf ("result = %d, a = %d\n", result, a);
	return 0;
}
void myflush()
{
    char ch;
    while((ch = getchar()) != '\n')
    { ;}
    return;
}