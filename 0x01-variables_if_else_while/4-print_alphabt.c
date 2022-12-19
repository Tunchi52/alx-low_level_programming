#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: Prints the alphabet using the putchar function
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	/* Description: To print alphabet except q and e using the putchar function */

	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		if (alphabet == 'q' || alphabet == 'e')
			continue;
		putchar(alphabet);
	}
	printf("\n");
	return (0);
}
