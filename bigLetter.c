#include <stdio.h>

int main(void)
{
	char ch;
	printf("Input char : ");
	scanf("%c", &ch);
	
	int isbigLetter;
	isbigLetter = 64 < ch && 90 >= ch;
	
	printf("Is char '%c' bigLetter? %d\n", ch, isbigLetter);

	return 0;
}
