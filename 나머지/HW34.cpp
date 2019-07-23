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
		 code = input("* ����� �ڵ带 �Է��Ͻÿ�(1:������/2.�����/3.������):");
		 if (1 <= code && code <= 3)
		 {
			 break;
		 }

	 }

	 while (1)
	 {
		 amount = input("* ��뷮�� �Է��Ͻÿ�(ton����):");
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
		 printf("\n# ������ڵ�: 1(������) \n");

	 }
	 else if (code == 2)
	 {
		 printf("\n# ������ڵ�: 2(�����) \n");

	 }
	 else
	 {
		 printf("\n# ������ڵ�: 3(������) \n");

	 }
	 printf("# ��뷮: %d ton \n", amount);
	 printf("# �Ѽ������: %d��\n", cost);
	 return;
 }

 void myflush() 
 {
	 while (getchar() != '\n')
	 {
		 ;
	 }
}