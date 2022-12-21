#include "main.h"

/**
  * main - Entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	char word[] = "_putchar";
	int counter;

	for (counter = 0; counter < 8; counter++)
	{
		_putchar(word[counter]);
	}
	_putchar('\n');
	return (0);
}
