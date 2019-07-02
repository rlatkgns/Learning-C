#pragma warning(disable:4996)
#include<stdio.h>
void myflush();
int main()
{
	int score;
	int myclass;
	int age;
	printf("성적 입력: ");
	scanf("%d", &score);
//	printf("반(A~C) 입력: ");
//	myflush(); // scanf()함수 수행 후 잔여데이터 지우기(myflush가 없을 경우 myclass에는 '\n'값을 받게된다.
	myclass = getchar(); //getchar 문자1개 입력받는 함수
	printf("나이 입력: ");
	scanf("%d", &age);
	/*printf("성적: %d점 / 소속반 : %c반\n", score, myclass);*/
	printf("성적: %d점 / 나이 : %d세\n", score, age);

	return 0;
}
void myflush()
{
    while(getchar() != '\n')
    { ;}
    return;
}