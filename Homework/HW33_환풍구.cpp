// HW33 환풍구 관리 프로그램
// 작성자 : 렉토피아 정혜경 강사
#pragma warning (disable : 4996)
#define MYFLUSH { while(getchar()!='\n'); }
#include<stdio.h>
int controlMenu(void);             /* Number select Menu 처리 함수    */
void fanOn(unsigned char *);       /* 환풍구 열기 작업  처리 함수  */
void fanOff(unsigned char *);      /* 환풍구 닫기 작업  처리 함수  */
void fanReverse(unsigned char *);  /* 환풍구 전체 전환  처리 함수 */
void display(unsigned char fan_set); /* 환풍구 상태 출력 함수 */
int inputUInt(const char *msg);
/*--------------------------------------------------------------------------*/
/*                               main() 함수                                */
/*--------------------------------------------------------------------------*/
int main()
{
	unsigned char fan_set = 0; /* fan의 상태를 저장하는 변수 : bit의 값이 0이면 off상태를 나타내고,
							   1이면 on상태를 나타냄 시작할때에는 8개의 fan이 모두 off인 상태로 시작 함 */
	int res;  /* 선택된 메뉴번호 저장 변수 */
	while (1){
		res = controlMenu(); /* 메뉴 출력 및 메뉴 선택 */
		if (res == 4) { /* 종료 메뉴 선택시 반복문 종료 */
			break;
		}
		switch (res) {  /* 1~3번 메뉴 선택시 해당 함수 수행 */
		case 1: fanOn(&fan_set);
			break;
		case 2: fanOff(&fan_set);
			break;
		case 3: fanReverse(&fan_set);
			break;
		default:;
		}
		display(fan_set); /* 환풍기 상태 화면 출력 */
	}
	return 0;
}
/*--------------------------------------------------------------------------*/
/*                     Number select Menu 처리 함수                         */
/*--------------------------------------------------------------------------*/
int controlMenu(void)
{
	int number;
	while (1){
		/* 메뉴 출력하기 */
		number = inputUInt("1. 환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
		if (1 <= number && number <= 4) {  /* 입력된 메뉴번호가 1~4번 메뉴이면 반복문 탈출 */
			break;
		}
		else {  /* 잘못된 메뉴번호 입력시 재입력 요구 메세지 출력 */
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n\n");
		}
	}
	return number;
}
/*--------------------------------------------------------------------------*/
/*                     환풍구 열기 작업  처리 함수                          */
/*--------------------------------------------------------------------------*/
void fanOn(unsigned char *ptr_fan_set)
{
	int fan_number;
	char set_data = 1;
	printf("------------------------------------------------------------------------\n");
	printf("                        Fan  열기 작업 실행 화면                        \n");
	printf("------------------------------------------------------------------------\n\n");
	while (1) {
		fan_number = inputUInt(" * OPEN할 FAN 번호를 입력하시오(1-8) : ");
		if (1 <= fan_number && fan_number <= 8) {
			break;
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n\n");
		}
	}
	set_data = set_data << (fan_number - 1); /* 열어줄 을 환풍구 비트 위치로 1을 세팅 함 */
	*ptr_fan_set = *ptr_fan_set | set_data; /* 해당 bit를 1로 만들어 줌 */
}
/*--------------------------------------------------------------------------*/
/*                     환풍구 닫기 작업  처리 함수                          */
/*--------------------------------------------------------------------------*/
void fanOff(unsigned char *ptr_fan_set)
{
	int fan_number;
	char set_data = 1;
	printf("------------------------------------------------------------------------\n");
	printf("                        Fan  닫기 작업 실행 화면                        \n");
	printf("------------------------------------------------------------------------\n\n");

	while (1) {
		fan_number = inputUInt(" * CLOSE할 FAN 번호를 입력하시오(1-8) : ");
		if (1 <= fan_number && fan_number <= 8) {
			break;
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n\n");
		}
	}
	set_data = set_data << (fan_number - 1); /* 닫을 환풍구 비트 위치로 1을 세팅 함 */
	set_data = ~set_data; /* 닫을 환풍구 비트만 0이 되고 나머지는 모두 1이 되도록 세팅함 */
	*ptr_fan_set = *ptr_fan_set & set_data; /* 해당 환풍구 비트를 0으로 만들어 닫아줌 */
}
/*--------------------------------------------------------------------------*/
/*     환풍구 전체 전환(열린것은 닫고, 닫힌것은 열어 줌) 작업 처리 함수     */
/*--------------------------------------------------------------------------*/
void fanReverse(unsigned char *ptr_fan_set)
{
	printf("------------------------------------------------------------------------\n");
	printf("                        Fan  전체 전환 작업 실행 화면                   \n");
	printf("------------------------------------------------------------------------\n\n");
	*ptr_fan_set = ~*ptr_fan_set; /* 열린 환풍구는 모두 닫고 닫힌 환풍구는 모두 열림 */
	printf("       전체 FAN의 상태가 전환되었습니다. (ON, OFF 상태 뒤바뀜)\n\n");
}
/*--------------------------------------------------------------------------*/
/*                     환풍구 On, Off 상태 출력 함수                          */
/*--------------------------------------------------------------------------*/
void display(unsigned char fan_set)
{
	int i;
	unsigned char flag = 0x80;
	printf("-----------------------------------------------------------------------\n\n");
	for (i = 8; i >= 1; i--) {
		printf("%d번FAN\t", i);
	}
	printf("\n");
	for (i = 8; i >= 1; i--) {
		if (fan_set & flag) {
			printf("  ON\t");
		}
		else {
			printf("  OFF\t");
		}
		flag = flag >> 1;
	}
	printf("\n-----------------------------------------------------------------------\n\n");
}
/*--------------------------------------------------------------------------*/
/*                               inputUInt 함수                                */
/*--------------------------------------------------------------------------*/
int inputUInt(const char *msg)
{
	int num;
	while (1) {
		printf(msg);
		scanf("%d", &num);
		if ((getchar() == '\n') && (num >= 0)) {
			break;
		}
		MYFLUSH; // myflush()함수대신 MACRO 사용
	}
	return num;
}