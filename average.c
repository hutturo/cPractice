#include <stdio.h>

int main(void)
{
	int Korean;
	int English;
	int Math;
	
	printf("국어 점수 입력: ");
	scanf("%d", &Korean);
	printf("영어 점수 입력: ");
	scanf("%d", &English);
	printf("수학 점수 입력: ");
	scanf("%d", &Math);
	
	double average;
	
	average = (Korean + English + Math) / 3.0;
	printf("평균점수: %.2f\n", average);
	return 0;
}
