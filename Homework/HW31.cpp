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
	printf("* ���� �ܾ��� 0���Դϴ�.\n");

	while (1) 
	{
		enter = menu();
		if (enter == 'q')
			break;
		else if (enter == 'i')
			money = deposit(money);
		else if (enter == 'o')
			money = withdraw(money);
		printf("* ���� �ܾ��� %d���Դϴ�.\n", money);
	}
	return 0;
}

char menu() 
{
	int res;
	char enter;
	while (1)
	{
		printf("\n# �޴��� �����Ͻÿ�(i-�Ա�, o-���, q-����) : ");
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
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�\n");
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
		addMoney = inputInt("# �Աݾ��� �Է��ϼ��� : ");
		if (addMoney > 0)
		{
			money += addMoney;
			break;
		}
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�\n");
		}
	}
	return money;
}

int withdraw(int money) 
{
	int subMoney;
	while (1)
	{
		subMoney = inputInt("# ��ݾ��� �Է��ϼ��� : ");
		if (subMoney > 0 && subMoney <= money)
		{
			money -= subMoney;
			break;
		}
		else if (subMoney > 0 && subMoney > money)
		{
			printf("* �ܾ��� �����մϴ�.\n");
			break;
		}
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�\n");
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