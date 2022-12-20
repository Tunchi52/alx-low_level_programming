#include <stdio.h>

/**
  * main - entry point
  * Return: Always 0 (success)
  */
int main(void)
{
	/* To print the alphabet in reverse */

	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
