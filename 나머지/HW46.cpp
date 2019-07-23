#include<stdio.h>
#include<string.h>

int input(int*, int*, int*);
int errCheck(int*, int*, int*);
int sumDays(int*, int*, int*);
void output(int, int, int, int);
int yearCheck(int *);

int main()
{
	int year, month, day;
	int res2, totdays;

	while (1)
	{
		input(&year, &month, &day);

		res2 = errCheck(&year, &month, &day);
		if (res2 == 2) break;
	}

	totdays = sumDays(&year, &month, &day);

	output(year, month, day, totdays);

	return 0;
}

int input(int* py, int* pm, int* pd)
{
	printf("* �� �� ���� �Է��ϼ��� : ");
	scanf("%d%d%d", py, pm, pd);
	return 0;
}

int errCheck(int* py, int* pm, int* pd) 
{
	int res;
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


	if ((*py) < 1900) { printf("�߸��Է��ϼ̽��ϴ�.\n"); return (1); }
	else
	{ 
		if ((*pm) < 1 || (*pm) > 12) { printf("�߸��Է��ϼ̽��ϴ�.\n"); return (1); }
		else
		{  
			if ((*pd) < 1) { printf("�߸��Է��ϼ̽��ϴ�.\n"); return (1); }
			else if ((*pm) == 2)  
			{
				res = yearCheck(py);
				if (res == 2) 
					if ((*pd) == 29)
					{
						printf("�߸��Է��ϼ̽��ϴ�.\n");    return (1);
					}
			}
			else
			{
				if (*pm == 1 || *pm == 3 || *pm == 5 || *pm == 7 || *pm == 8 || *pm == 10 || *pm == 12)
				{
					if (*pd > 31) { printf("day����!\n"); return (1); }
				}
				if (*pm == 4 || *pm == 6 || *pm == 9 || *pm == 11)
				{
					if (*pd > 30) { printf("day����!\n"); return (1); }
				}
			}
		}
	}
	return (2);
}

int sumDays(int* py, int* pm, int* pd)
{
	int i, res;
	int yDays = 0, mDays = 0, totDays = 0;
	int leapCnt = 0, comCnt = 0;
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 

	for (i = 1900; i <= (*py - 1); i++)  
	{
		res = yearCheck(&i);
		if (res == 1)   
			leapCnt++;
		if (res == 2)   
			comCnt++;
	}
	yDays = (leapCnt * 366) + (comCnt * 365);

	for (i = 1; i <= (*pm - 1); i++)     
	{
		mDays += month[i-1];
	}

	totDays = (yDays + mDays) + *pd;

	res = yearCheck(py);   
	if (res == 1)          
		if ((*pm) >= 3)
			totDays += 1;

	return totDays;
}

void output(int year, int month, int day, int totdays)
{
	char str[4];

	printf("%d�� %d�� %d���� ", year, month, day);
	switch (totdays % 7)
	{
	case 0: strcpy(str, "��"); break;
	case 1: strcpy(str, "��"); break;
	case 2: strcpy(str, "ȭ"); break;
	case 3: strcpy(str, "��"); break;
	case 4: strcpy(str, "��"); break;
	case 5: strcpy(str, "��"); break;
	case 6: strcpy(str, "��"); break;
	default:;
	}
	printf("%s�����Դϴ�.\n", str);
}

int yearCheck(int *py)
{
	int a;

	if ((*py) % 4 == 0)
	{
		if ((*py) % 100 == 0)
		{
			if ((*py) % 400 == 0) a = 1;
			else a = 0;
		}
		else a = 1;
	}
	else a = 0;

	if (a == 1)
	{
		return (1);
	}
	else 
	{
		return (2);
	}
}