#pragma warning(disable:4996)
#include<stdio.h>
void myflush();
int main()
{
	int a=0, b=0, c=0, result, total;
	printf("���� ������ �Է��Ͻÿ�: ");
	result = scanf("%d %d %d", &a, &b, &c);
	if(result == 3)
	{
		total = a + b + c;
		printf("������ ���� %d�Դϴ�.\n", total);
	}
	else
	{
	    myflush();
		printf("�Էµ����� �����Դϴ�.\n");
	}
	printf("scanf()�Լ��� ���ϰ�: %d\n", result);
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