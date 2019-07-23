#include <stdio.h>
 int input(const char*msg);
 int calc(int, int);
 void output(int, int, int);
 void myflush();

 int main()
 {
	 int cost = 0, code = 0, amount = -1;

	 while (1)
	 {
		 code = input("* 사용자 코드를 입력하시오(1:가정용/2.상업용/3.공업용):");
		 if (1 <= code && code <= 3)
		 {
			 break;
		 }

	 }

	 while (1)
	 {
		 amount = input("* 사용량을 입력하시오(ton단위):");
		 if (amount >= 0)
		 {
			 break;
		 }
	 }
	 cost = calc(code, amount);
	 output(code, amount, cost);
	 return 0;
 }

 int input(const char*msg)
 {
	 int n;

	 printf("%s", msg);
	 scanf("%d", &n);
	 myflush();
	 return n;
 }

 int calc(int code, int amount)
 {
	 int cost;
	 switch (code)
	 {
	 case 1:
		 cost = (amount * 50) * 1.05;
		 break;
	 case 2:
		 cost = (amount * 45) * 1.05;
		 break;
	 case 3:
		 cost = (amount * 30) * 1.05;
		 break;
	 }
	 return cost;
 }

 void output(int code, int amount, int cost)
 {
	 if (code == 1)
	 {
		 printf("\n# 사용자코드: 1(가정용) \n");

	 }
	 else if (code == 2)
	 {
		 printf("\n# 사용자코드: 2(상업용) \n");

	 }
	 else
	 {
		 printf("\n# 사용자코드: 3(공업용) \n");

	 }
	 printf("# 사용량: %d ton \n", amount);
	 printf("# 총수도요금: %d원\n", cost);
	 return;
 }

 void myflush() 
 {
	 while (getchar() != '\n')
	 {
		 ;
	 }
}