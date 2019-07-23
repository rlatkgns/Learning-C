#include<stdio.h>
int main()
{
	int history;
	int literature;
	int arts;
	printf("역사, 문학, 예능 점수를 입력하세요.: \n", history, literature, arts);
	scanf("%d", &history);
	scanf("%d", &literature);
	scanf("%d", &arts);
	int total = history + literature + arts;
	double mean = total / 3.0;
	printf("총점은 %d이고 평균은 %.2lf입니다.", total, mean);
	return 0;
}
