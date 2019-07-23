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
	mine = input("바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
	while (mine == com) {
		output(mine, com);
		com = random(3) + 1;
		mine = input("바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
		++j;
	}
	while (mine == com - 1 || mine == com + 2)
	{
		output(mine, com);
		com = random(3) + 1;
		mine = input("바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
		++i;
	}
	while (com == mine - 1 || com == mine + 2)
	{

		output(mine, com);
		break;
	}
	printf("게임결과 : %d 승 %d 무 \n", i, j);
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
		case 1: printf("당신은 바위 선택, 컴퓨터는 바위 선택 : 비겼습니다.\n"); break;
		case 2: printf("당신은 가위 선택, 컴퓨터는 가위 선택 : 비겼습니다.\n"); break;
		case 3: printf("당신은 보 선택, 컴퓨터는 보 선택 : 비겼습니다.\n"); break;
		default:;
		}
	}
	else if (mine == com - 1 || mine == com + 2) {
		switch (mine) {
		case 1: printf("당신은 바위 선택, 컴퓨터는 가위 선택 : 이겼습니다.\n"); break;
		case 2: printf("당신은 가위 선택, 컴퓨터는 보 선택 : 이겼습니다.\n"); break;
		case 3: printf("당신은 보 선택, 컴퓨터는 바위 선택 : 이겼습니다.\n"); break;
		default:;
		}
	}
	else {
		switch (mine) {
		case 1: printf("당신은 바위 선택, 컴퓨터는 보 선택 : 당신이 졌습니다.\n"); break;
		case 2: printf("당신은 가위 선택, 컴퓨터는 바위 선택 : 당신이 졌습니다.\n"); break;
		case 3: printf("당신은 보 선택, 컴퓨터는 가위 선택 : 당신이 졌습니다.\n"); break;
		default:;
		}
	}
	return;
}