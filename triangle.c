#include <stdio.h>

int main(void)
{
	int bottomlength;
	int highth;
	
	printf("삼각형의 밑변길이: ");
	scanf("%d", &bottomlength);
	printf("삼각형의 높이: ");
	scanf("%d", &highth);
	
	double width;
	
	width = bottomlength * highth / 2;
	
	printf("삼각형의 넓이: %.2f\n", width);
	return 0;
}
