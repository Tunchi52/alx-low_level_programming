#include <stdio.h>

/**
  * main - entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	/* To print numbers of base 16 in lower case */

	int i;

	for (i = 0; i <= 15; i++)
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	putchar('\n');
	return (0);
}
