#pragma warning(disable:4996)
#include<stdio.h>
void myflush();
int main()
{
	int score;
	int myclass;
	int age;
	printf("���� �Է�: ");
	scanf("%d", &score);
//	printf("��(A~C) �Է�: ");
//	myflush(); // scanf()�Լ� ���� �� �ܿ������� �����(myflush�� ���� ��� myclass���� '\n'���� �ްԵȴ�.
	myclass = getchar(); //getchar ����1�� �Է¹޴� �Լ�
	printf("���� �Է�: ");
	scanf("%d", &age);
	/*printf("����: %d�� / �Ҽӹ� : %c��\n", score, myclass);*/
	printf("����: %d�� / ���� : %d��\n", score, age);

	return 0;
}
void myflush()
{
    while(getchar() != '\n')
    { ;}
    return;
}