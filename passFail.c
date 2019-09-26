#include <stdio.h>

int main(void)
{
	int score;
	printf("input score: ");
	scanf("%d", &score);
	
	int isPassed;
	isPassed = score >= 60;
	
	printf("score : %d is passed? %d\n", score, isPassed);
	
	return 0;
}
