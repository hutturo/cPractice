#include <stdio.h>

int main(void)
{
	int fahr;
	fahr = 100;
	
	int celsiusLeft;
	int celsiusRight;
	int celsius1000 = 1000 * 5 * (fahr -32) / 9;
	
	celsiusLeft = celsius1000 / 1000;
	//celsiusRight = (celsius1000 - celsiusLeft / 1000 * 1000 + 5) / 10;
	celsiusRight = (celsius1000 % 1000 + 5) / 10;
	
	printf("fahr : %d ---> celsius : %d.%d\n", fahr, celsiusLeft, celsiusRight);
	return 0;
}
