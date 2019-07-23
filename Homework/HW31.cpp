#include <stdio.h>

char menu();
int inputInt(const char*);
int deposit(int money);
int withdraw(int money);
void myflush();

int main()
{
	char enter;
	int money = 0;
	printf("* 현재 잔액은 0원입니다.\n");

	while (1) 
	{
		enter = menu();
		if (enter == 'q')
			break;
		else if (enter == 'i')
			money = deposit(money);
		else if (enter == 'o')
			money = withdraw(money);
		printf("* 현재 잔액은 %d원입니다.\n", money);
	}
	return 0;
}

char menu() 
{
	int res;
	char enter;
	while (1)
	{
		printf("\n# 메뉴를 선택하시오(i-입금, o-출금, q-종료) : ");
		res = scanf("%c", &enter);
		while (getchar() != '\n');

		if (enter == 'i')
			return enter;
		else if (enter == 'o')
			return enter;
		else if (enter == 'q')
			return enter;
		else
		{
			printf("잘못 입력하셨습니다.\n");
		}
	}
}

int inputInt(const char*msg) 
{
	int n;
	while (1)
	{
		printf("%s", msg);
		scanf("%d", &n);
		if (getchar() == '\n')
		{
			break;
		}
		else
		{
			printf("잘못 입력하셨습니다. 다시 입력하십시오\n");
		}
		myflush();
	}
	return n;
}

int deposit(int money)
{
	int addMoney;
	while (1)
	{
		addMoney = inputInt("# 입금액을 입력하세요 : ");
		if (addMoney > 0)
		{
			money += addMoney;
			break;
		}
		else
		{
			printf("잘못 입력하셨습니다. 다시 입력하십시오\n");
		}
	}
	return money;
}

int withdraw(int money) 
{
	int subMoney;
	while (1)
	{
		subMoney = inputInt("# 출금액을 입력하세요 : ");
		if (subMoney > 0 && subMoney <= money)
		{
			money -= subMoney;
			break;
		}
		else if (subMoney > 0 && subMoney > money)
		{
			printf("* 잔액이 부족합니다.\n");
			break;
		}
		else
		{
			printf("잘못 입력하셨습니다. 다시 입력하십시오\n");
		}
	}
	return money;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}