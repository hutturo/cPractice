#include <stdio.h>

int main(void)
{
	int year;
	printf("input year: ");
	scanf("%d", &year);
	
	int isLeap;
	isLeap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	
	printf("Is '%d' year leap year? %d\n",year, isLeap);
	
	return 0;
}
