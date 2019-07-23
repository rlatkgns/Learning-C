#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH 13 /* 주민등록번호 길이*/
int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char *resident_number);
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear(int year);

int main()
{
	/* 테스트할 주민등록번호 저장 배열*/
	char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
		"0003154194917", "801203#201122", "7804155328845", "7804150328840",
		"9612241068382", "9902292194322", "0230174326176", "8811391042219",
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
		"8806311069417","8807311069418" };
	int i, count;
	/* 검사할 주민등록번호의 개수 계산*/
	count = sizeof(resident_number) / sizeof(resident_number[0]);
	for (i = 0; i < count; i++) /* 주민등록번호 유효성 검사를 반복적으로 수행 함*/
	{
		if (availabilityCheck(resident_number[i]) == TRUE)
		{
			printf("(+) 주민번호%s는(은) 유효한 번호입니다.\n", resident_number[i]);
		}
		else
		{
			printf("(-) 주민번호%s는(은) 유효하지 않은 번호입니다.\n", resident_number[i]);
		}
	}
	return 0;
}

int availabilityCheck(char *resident_number)
{
	if (checkLengthCharacter(resident_number) == FALSE)
		return FALSE;
	if (checkDate(resident_number) == FALSE)
		return FALSE;
	if (checkIdentification(resident_number) == FALSE)
		return FALSE;
	if (checkGender(resident_number) == FALSE)
		return FALSE;
	return TRUE;
}

int checkYear(int y)
{
	if (!(y % 4))
	{
		if (!(y % 100))
		{
			if (!(y % 400))
				return TRUE;
			else
				return FALSE;
		}
		else
			return TRUE;
	}
	else
		return FALSE;
}

int checkIdentification(char *resident_number)
{
	int sum = 0, i;
	for (i = 0; i < 12; ++i)
	{
		sum += (resident_number[i] - '0');
	}
	if (sum % 10 == (resident_number[12] - '0'))
		return TRUE;
	return FALSE;
}

int checkLengthCharacter(char *resident_number)
{
	int i;
	int size;
	size = strlen(resident_number);
	if (size != RESIDENT_NUMBER_LENGTH)
		return FALSE;
	for (i = 0; i < 13; ++i) {
		if (resident_number[i]<'0' || resident_number[i]>'9')
			return FALSE;
	}
	return TRUE;
}

int checkGender(char *resident_number)
{
	if (resident_number[6] < '1' || resident_number[6]>'4')
		return FALSE;
	return TRUE;
}

int checkDate(char * resident_number)
{
	int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year = 0, month = 0, day = 0;
	if (resident_number[6] == '3' || resident_number[6] == '4')
		year += 2000 + (10 * (resident_number[0] - '0') + resident_number[1] - '0');
	else year += 1900 + (10 * (resident_number[0] - '0') + resident_number[1] - '0');
	month = 10 * (resident_number[2] - '0') + (resident_number[3] - '0');
	day = 10 * (resident_number[4] - '0') + (resident_number[5] - '0');
	if (resident_number[4] == '0'&& resident_number[5] == '0')
		return FALSE;
	if (month < 0 || month > 12)
		return FALSE;
	if (checkYear(year))
	{
		if (month == 2)
		{
			if (1 <= day && day <= 29)
				return TRUE;
			else
				return FALSE;
		}
	}
	if (days[month - 1] < day)
		return FALSE;
	return TRUE;
}
