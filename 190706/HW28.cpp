#include<stdio.h>

int main() 
{
	char ascii;
	int engCount = 0, numCount = 0, spaceCount = 0, anotherCount = 0;

	printf("# 영문 문장을 입력 하시오 :\n");

	while ((ascii = getchar()) != EOF)
	{
		if (((ascii >= 65) && (ascii <= 90)) || ((ascii >= 97) && (ascii <= 122)))
			engCount++;
		else if ((ascii >= 48) && (ascii <= 57))
			numCount++;
		else if ((ascii == 32) || (ascii == 9) || (ascii == 10))
			spaceCount++;
		else
			anotherCount++;
	}

	printf("* 영문자 대소문자 개수 : %d\n", engCount);
	printf("* 숫자문자 개수 : %d\n", numCount);
	printf("* 여백문자(space, tab, enter) 개수 : %d\n", spaceCount);
	printf("* 그 외 기타문자 개수 : %d\n", anotherCount);

	return 0;
}
