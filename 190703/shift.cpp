#include<stdio.h>
int main()
{
	int i = 0, k = 1, res;
	res = k << 33; // res = k(33%sizeof(k) *8);
	printf("res = %d\n", res);
	return 0;
	//while (i++ < 32)
	//{
	//	printf("k<<%d = %d\n", i, k = k << 1);
	//}
	//return 0;
}