#include <stdio.h>

int main(void)
{
	int radius;
	double pie = 3.141592;
	
	scanf("%d", &radius);
	
	double circlearea;
	
	circlearea = pie * radius * radius;
	
	printf("%.2f\n", circlearea);

	return 0;
}
