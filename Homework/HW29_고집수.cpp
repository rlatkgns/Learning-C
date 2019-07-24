#pragma warning (disable : 4996)
#define MYFLUSH { while(getchar()!='\n'); }
#include<stdio.h>
int transNumber(int n);
int inputUInt(const char *msg);

int main()
{
	int startN, endN;
	int gNumber;
	int gCnt = 0;  // �������� ���� ī��Ʈ����
	int count; // �������� ���ϱ� ���� �ܰ躰 ī��Ʈ����
	int testNumber;
	int i;

	startN = inputUInt("���� �� �Է� : ");
	while (startN<100 || startN>10000) {
		startN = inputUInt("���� �� �Է� : ");
	}

	endN = inputUInt("�� �� �Է� : ");
	while (endN<100 || endN>10000) {
		endN = inputUInt("�� �� �Է� : ");
	}
	
	gNumber = inputUInt("������ �Է� : ");
	while (gNumber<1 || gNumber>10) {
		gNumber = inputUInt("������ �Է� : ");
	}
	
	printf("�������� %d�� ���� ���\n", gNumber);
	for (i = startN; i <= endN; i++) {
		count = 1;  // ������ �˻縦 1ȸ�� ������ �����ϹǷ� 1�� �ʱ�ȭ
		testNumber = i;
		while ((testNumber = transNumber(testNumber)) > 10) {
			count++;
		}
		if (count == gNumber) { // i�� �������� gNumber�� ������ ã�� ��������
			printf("%d\n", i);
			gCnt++;
		}
	}
	printf("�� ���� : %d��\n", gCnt);
	return 0;
}
int transNumber(int n)
{
	int multiSum = 1; // ������ ������ ���庯��
	int number;  // ���ڸ��� ��� ���� ���庯��

	while (n >= 10) {
		number = n % 10;  // n�� ������ 1�� �ڸ����� ���� ��
		multiSum *= number;
		n = n / 10;  // n�� ���� ���ڸ� ����(�� : 100���� ���ڿ��ٸ� 10������ ����)
	}
	multiSum *= n;
	return multiSum;
}
int inputUInt(const char *msg)
{
	int num;
	while (1) {
		printf(msg);
		scanf("%d", &num);
		if ((getchar() == '\n') && (num >= 0)){
			break;
		}
		MYFLUSH; // myflush()�Լ���� MACRO ���
	}
	return num;
}