#include <stdio.h>
#define PI 3.141592

int main(void)
{
	int radius;
	
	scanf("%d", &radius);
	
	double circlearea;	
	circlearea = PI * radius * radius;
	
	printf("%.2f\n", circlearea);
	return 0;
}
