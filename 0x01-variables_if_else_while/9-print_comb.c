#include <stdio.h>

/**
  * main - entry point
  * Return: Alwyas 0 (success)
  */

int main(void)
{
	/* To print combination of single - digit numbers */

	for (int i = 0; i <= 9; i++)
	{
		putchar(i + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
