#include <stdio.h>

int main(void)
{
	int num_man;
	int num_woman;
	
	scanf("%d %d", &num_man, &num_woman);
	
	int sum = num_man + num_woman;
	
	//double manRatio = 1.0 * num_man / sum * 100;
	//double womanRatio = 1.0 * num_woman / sum * 100;
	double manRatio = (double)num_man / sum * 100;
	double womanRatio = (double)num_woman / sum * 100;
	
	printf("manRatio: %.2f%%\twomanRatio: %.2f%%\n", manRatio, womanRatio);
	
	return 0;
}
