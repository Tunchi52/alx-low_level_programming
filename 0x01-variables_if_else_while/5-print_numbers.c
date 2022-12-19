#include <stdio.h>

/**
  * main - entry point
  * Return: Always 0 (success)
  *
  * Description: prints 0 - 10 using the printf function
  */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
