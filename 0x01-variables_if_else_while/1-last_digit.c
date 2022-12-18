#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n; /* random number */
	int Last_number; /* holds last number from the random number */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_number = n % 10;
	printf("Last digit of %d is %d", n, Last_number);

	if (Last_number > 5)
		printf(" and is greater than 5\n");
	else if (Last_number < 6 && Last_number != 0)
		printf(" and is less than 6 and not 0\n");

	else if (Last_number == 0)
		printf(" and is 0\n");
	return (0);
}
