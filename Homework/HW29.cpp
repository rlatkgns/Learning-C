#include <stdio.h>
#include <string.h>

int inputUint(const char*);
int transNumber(int);
void myflush(void);

int main()
{
	int i = 0;
	int k = 0;
	int m, n, a, int1, int2;
	int gozipNum;

	int1 = inputUint("시작 값(P1) :");
	int2 = inputUint("끝 값(P2) :");
	gozipNum = inputUint("고집수(N) :");
	m = int1;
	n = int1;
	while (1)
	{
		i = 0;
		if (m > int2)
		{
			break;
		}
		while (1)
		{
			if (m < 10)
			{
				break;
			}
			else
			{
				a = transNumber(m);
				m = a;
				i += 1;
			}
		}
		if (i == gozipNum)
		{
			printf("%d\n", n);
			k += 1;
		}
		else
		{
			;
		}
		n += 1;
		m = n;
	}
	printf("총 개수 : %d개", k);
	return 0;
}

int inputUint(const char* message)
{
	int num;
	while (1)
	{
		printf("%s", message);
		scanf("%d", &num);
		if (getchar() == '\n')
		{
			if (num >= 0)
			{
				break;
			}
			else
			{
				myflush();
			}
		}
		else
		{
			myflush();
		}
	}
	return num;
}

int transNumber(int num)
{
	int a;
	if (num == 10000)
	{
		a = 0;
	}
	else if ((num >= 1000) && (num < 10000))
	{
		a = (num / 1000)*((num / 100) % 10)*((num / 10) % 10)*(num % 10);
	}
	else if ((num >= 100) && (num < 1000))
	{
		a = (num / 100)*((num / 10) % 10)*(num % 10);
	}
	else if ((num >= 10) && (num < 100))
	{
		a = (num / 10)*(num % 10);
	}
	else
	{
		a = num;
	}
	return a;
}

void myflush(void)
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}