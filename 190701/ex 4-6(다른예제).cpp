#pragma warning(disable:4996)
#include<stdio.h>
void myflush();
int main()
{
	int score;
	int myclass;
	printf("���� �Է�: ");
	scanf("%d", &score);
	printf("��(A~C) �Է�: ");
	myflush(); // scanf()�Լ� ���� �� �ܿ������� �����(myflush�� ���� ��� myclass���� '\n'���� �ްԵȴ�.
	myclass = getchar(); //getchar ����1�� �Է¹޴� �Լ�
	
	printf("����: %d�� / �Ҽӹ� : %c��\n", score, myclass);
	return 0;
}
void myflush()
{
    while(getchar() != '\n')
    { ;}
    return;
}