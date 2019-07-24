#pragma warning (disable : 4996)
#define MYFLUSH { while(getchar()!='\n'); }
#include<stdio.h>
int transNumber(int n);
int inputUInt(const char *msg);

int main()
{
	int startN, endN;
	int gNumber;
	int gCnt = 0;  // 고집수의 개수 카운트변수
	int count; // 고집수를 구하기 위한 단계별 카운트변수
	int testNumber;
	int i;

	startN = inputUInt("시작 값 입력 : ");
	while (startN<100 || startN>10000) {
		startN = inputUInt("시작 값 입력 : ");
	}

	endN = inputUInt("끝 값 입력 : ");
	while (endN<100 || endN>10000) {
		endN = inputUInt("끝 값 입력 : ");
	}
	
	gNumber = inputUInt("고집수 입력 : ");
	while (gNumber<1 || gNumber>10) {
		gNumber = inputUInt("고집수 입력 : ");
	}
	
	printf("고집수가 %d인 숫자 출력\n", gNumber);
	for (i = startN; i <= endN; i++) {
		count = 1;  // 고집수 검사를 1회는 무조건 실행하므로 1로 초기화
		testNumber = i;
		while ((testNumber = transNumber(testNumber)) > 10) {
			count++;
		}
		if (count == gNumber) { // i의 고집수가 gNumber와 같으면 찾는 고집수임
			printf("%d\n", i);
			gCnt++;
		}
	}
	printf("총 개수 : %d개\n", gCnt);
	return 0;
}
int transNumber(int n)
{
	int multiSum = 1; // 곱셈의 누적값 저장변수
	int number;  // 한자리씩 끊어낸 숫자 저장변수

	while (n >= 10) {
		number = n % 10;  // n의 값에서 1의 자리수를 구해 냄
		multiSum *= number;
		n = n / 10;  // n의 값을 한자리 낮춤(예 : 100단위 숫자였다면 10단위로 낮춤)
	}
	multiSum *= n;
	return multiSum;
}
int inputUInt(const char *msg)
{
	int num;
	while (1) {
		printf(msg);
		scanf("%d", &num);
		if ((getchar() == '\n') && (num >= 0)){
			break;
		}
		MYFLUSH; // myflush()함수대신 MACRO 사용
	}
	return num;
}