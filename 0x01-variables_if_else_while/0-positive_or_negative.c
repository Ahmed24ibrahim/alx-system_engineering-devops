#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: false or true validation
 *
 * Return:Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		pritf("%i is positive\n", n);
	else if (n == 0)
		pritf("%i is zero\n", n);
	else
		pritf("%i is negative\n", n);
	return (0);
}
