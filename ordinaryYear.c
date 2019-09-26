#include <stdio.h>

int main(void)
{
	int year;
	printf("input year: ");
	scanf("%d", &year);
	
	int isOrdinary;
	isOrdinary = year%4 != 0 || year%100 == 0 && year%400 != 0;
	
	printf("Is '%d' year ordinary year? %d\n",year, isOrdinary);
	
	return 0;
}
