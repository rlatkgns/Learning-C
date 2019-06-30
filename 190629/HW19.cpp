#include<stdio.h>
int input();
int yearCheck(int year);
void output(int year, int check);

int main()
{
	int year, check;
	year = input();
	check = yearCheck(year);
	output(year, check);
	return 0;
}

int input()
{
	int year;
	printf("년도를 입력하세요:");
	scanf("%d", &year);
	return year;
}

int yearCheck(int year)
{
    int check;

    if (year % 4 == 0) 
	{
        if (year % 100 == 0) 
		{
            if (year % 400 == 0) 
			{
                check = 1;
            }
            else
			{
                check = 0;
            }
        }
        else
		{
            check = 1;
        }
    }
    else
	{
        check = 0;
    }

    return check;
}

void output(int year, int check)
{
	if(check == 1)
	{
		printf("%d년은 윤년(Leap year)입니다.", year);
	}
	else
	{
		printf("%d년은 평년(Common year)입니다.", year);
	}
	return;
}
