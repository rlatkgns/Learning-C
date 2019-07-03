#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char ch;
	while ((ch = getchar()) != EOF);
	{
		if (ch >= 'a' && ch <= 'z')
		{
			ch -= 'a' - 'A';
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch += 'a' - 'A';
		}
		else
		{
			;
		}
		putchar(ch);
	}
	return 0;
}