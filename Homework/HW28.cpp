#include<stdio.h>

int main() 
{
	char ascii;
	int engCount = 0, numCount = 0, spaceCount = 0, anotherCount = 0;

	printf("# ���� ������ �Է� �Ͻÿ� :\n");

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

	printf("* ������ ��ҹ��� ���� : %d\n", engCount);
	printf("* ���ڹ��� ���� : %d\n", numCount);
	printf("* ���鹮��(space, tab, enter) ���� : %d\n", spaceCount);
	printf("* �� �� ��Ÿ���� ���� : %d\n", anotherCount);

	return 0;
}
