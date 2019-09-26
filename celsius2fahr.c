#include <stdio.h>

int main(void)
{
	int celsius;
	double fahr;
	
	//celsius = 100;
	scanf("%d", &celsius);
	fahr = celsius * 9.0 / 5.0 + 32;
	
	printf("celsius: %d ---> fahr: %.1f\n", celsius, fahr);
	return 0;
}
