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
		printf("1. 환풍구 열기 /2.환풍구 닫기 /3.환풍구 전체 전환 /4.종료 : ");
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
	printf(" Fan 열기 작업 실행 화면 \n");
	printf("---------------------------------------------------\n");
	fan = choiceFan("* OPEN할 FAN 번호를 입력하시오(1-8) : ");
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
	printf(" Fan 닫기 작업 실행 화면 \n");
	printf("---------------------------------------------------\n");
	fan = choiceFan("* CLOSE할 FAN 번호를 입력하시오(1-8) : ");
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
	printf(" Fan 전체 전환 작업 실행 화면 \n");
	printf("---------------------------------------------------\n");
	printf("전체 FAN의 상태가 전환되었습니다.(ON/OFF 상태 뒤바뀜)\n");
	printf("---------------------------------------------------\n");
	return ~bit;
}
void displayFan(unsigned char bit) {
	int i = 0;
	unsigned char res = 0x80;
	printf("8번FAN\t 7번FAN\t 6번FAN\t 5번FAN\t 4번FAN\t 3번FAN\t 2번FAN\t 1번FAN\n");
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
