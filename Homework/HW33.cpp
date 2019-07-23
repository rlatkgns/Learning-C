#include<stdio.h>

int menu();
unsigned char openFan(unsigned char);
unsigned char offFan(unsigned char);
unsigned char reverseFan(unsigned char);
void displayFan(unsigned char);
int choiceFan(char*message);
void myflush(void);

int main()
{
	int choice;
	unsigned char bit = 0x00;
	displayFan(bit);
	while (1) {
		choice = menu();
		switch (choice) {
		case 1: bit = openFan(bit); break;
		case 2: bit = offFan(bit); break;
		case 3: bit = reverseFan(bit); break;
		case 4:; break;
		}
		if (choice == 4) break;
		displayFan(bit);
	}
	return 0;
}
int menu()
{
	int num;
	while (1) {
		printf("1. ȯǳ�� ���� /2.ȯǳ�� �ݱ� /3.ȯǳ�� ��ü ��ȯ /4.���� : ");
		scanf("%d", &num);
		if (num >= 1 && num <= 4 && getchar() == '\n') {
			break;
		}
		myflush();
	}
	return num;
}
unsigned char openFan(unsigned char bit)
{
	int fan;
	unsigned char res = 0x80;
	printf("---------------------------------------------------\n");
	printf(" Fan ���� �۾� ���� ȭ�� \n");
	printf("---------------------------------------------------\n");
	fan = choiceFan("* OPEN�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");
	printf("---------------------------------------------------\n");
	res = res >> (8 - fan);
	bit = bit | res;
	return bit;
}
unsigned char offFan(unsigned char bit)
{
	int fan;
	unsigned char res;
	res = 0xbf;
	printf("---------------------------------------------------\n");
	printf(" Fan �ݱ� �۾� ���� ȭ�� \n");
	printf("---------------------------------------------------\n");
	fan = choiceFan("* CLOSE�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");
	printf("---------------------------------------------------\n");
	if (fan == 8) {
		bit = bit & 0x7f;
	}
	else {
		res = res >> (7 - fan);
		bit = bit & res;
	}
	return bit;
}
unsigned char reverseFan(unsigned char bit)
{
	int fan;
	printf("---------------------------------------------------\n");
	printf(" Fan ��ü ��ȯ �۾� ���� ȭ�� \n");
	printf("---------------------------------------------------\n");
	printf("��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�.(ON/OFF ���� �ڹٲ�)\n");
	printf("---------------------------------------------------\n");
	return ~bit;
}
void displayFan(unsigned char bit) {
	int i = 0;
	unsigned char res = 0x80;
	printf("8��FAN\t 7��FAN\t 6��FAN\t 5��FAN\t 4��FAN\t 3��FAN\t 2��FAN\t 1��FAN\n");
	while (i < 8) {
		if ((bit&res) == res) printf(" ON\t");
		else printf(" OFF\t");
		res = res >> 1;
		i++;
	}
	printf("\n---------------------------------------------------\n");
}
int choiceFan(char*message) {
	int num;
	while (1) {
		while (1) {
			printf("%s", message);
			scanf("%d", &num);
			if (getchar() == '\n') {
				break;
			}
			myflush();
		}
		if (num >= 1 && num <= 8) break;
	}
	return num;
}
void myflush(void) {
	while (getchar() != '\n') {
		;
	}
}
