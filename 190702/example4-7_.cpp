#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char oneStr[20], twoStr[20];
	printf("input string: ");
	fgets(oneStr, sizeof(oneStr), stdin);
	oneStr[strlen(oneStr) - 1] = '\0';

	printf("input string: ");
	fgets(twoStr, sizeof(twoStr), stdin);
	twoStr[strlen(twoStr) - 1] = '\0';
	printf("oneStr: %s\n", oneStr);
	printf("twoStr: %s\n", twoStr);
	
	return 0;
}