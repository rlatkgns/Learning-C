#pragma warning(disable : 4996)
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int random(int);
int input(const char*);
void output(int, int);

int main() {
	int com, mine;
	int i, j;
	srand((unsigned int)time(NULL));
	i = 0, j = 0;
	com = random(3) + 1;
	mine = input("������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
	while (mine == com) {
		output(mine, com);
		com = random(3) + 1;
		mine = input("������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
		++j;
	}
	while (mine == com - 1 || mine == com + 2)
	{
		output(mine, com);
		com = random(3) + 1;
		mine = input("������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
		++i;
	}
	while (com == mine - 1 || com == mine + 2)
	{

		output(mine, com);
		break;
	}
	printf("���Ӱ�� : %d �� %d �� \n", i, j);
	return 0;
}

int random(int n) {
	int res;
	res = rand() % n;
	return res;
}

int input(const char*msg) {
	int guess;
	while (1) {
		printf("%s", msg);
		scanf("%d", &guess);
		if (guess < 1 || guess > 3) {
			fflush(stdin);
		}
		else if (getchar() == '\n') {
			break;
		}

		else {
			fflush(stdin);
		}
	}
	return guess;
}

void output(int mine, int com) {
	if (mine == com) {
		switch (mine) {
		case 1: printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n"); break;
		case 2: printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n"); break;
		case 3: printf("����� �� ����, ��ǻ�ʹ� �� ���� : �����ϴ�.\n"); break;
		default:;
		}
	}
	else if (mine == com - 1 || mine == com + 2) {
		switch (mine) {
		case 1: printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n"); break;
		case 2: printf("����� ���� ����, ��ǻ�ʹ� �� ���� : �̰���ϴ�.\n"); break;
		case 3: printf("����� �� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n"); break;
		default:;
		}
	}
	else {
		switch (mine) {
		case 1: printf("����� ���� ����, ��ǻ�ʹ� �� ���� : ����� �����ϴ�.\n"); break;
		case 2: printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : ����� �����ϴ�.\n"); break;
		case 3: printf("����� �� ����, ��ǻ�ʹ� ���� ���� : ����� �����ϴ�.\n"); break;
		default:;
		}
	}
	return;
}