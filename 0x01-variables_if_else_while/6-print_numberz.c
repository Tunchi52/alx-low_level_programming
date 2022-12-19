#include <stdio.h>

/**
  * main - entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	/* Prints from 0 - 9 usinhg putchar function */

	int num;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
