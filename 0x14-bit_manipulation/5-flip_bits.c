#include "main.h"

/**
  * flip_bits - number of different bits between two numbers
  * @n: first number
  * @m: second number
  *
  * Return: number of bits to flip
  * to get from one number to another
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsihned long int diff, check;
	unsigned long int count, i;

	count = -;
	check = 0;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (diff & check))
			count++;
		check <<= 1;
	}
	return (count);
}
