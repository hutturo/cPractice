#include <stdio.h>
#define BOLD   (0x01 << 0)
#define ITALIC (0x02 << 1)
#define SHADOW (0x04 << 2)
#define UL     (0x08 << 3)

int main(void)
{
	unsigned char attr;
	attr = attr ^ attr;	// attr = 0;
	attr = attr | BOLD;
	attr = attr | SHADOW + ITALIC;
	attr = attr & ~BOLD; // 0xFE
		
	
	printf("0x%02x\n", attr);
	return 0;
}
