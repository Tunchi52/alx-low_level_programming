#include <stdio.h>
/**
  * main - entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	/* To print alphabet from a - z using pitchar */

	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	printf("\n");
	return (0);
}
