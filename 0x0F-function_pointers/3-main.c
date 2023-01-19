#include "3-calc.h"
#include <stdio.h>
#include <string.h> /* for atoi*/
#include <stdlib.h> /* for exit*/

/**
  * main - Program Entry
  *
  * Description: program that takes 4 argument where 2 are variables
  *		int variables plus an operator to perform
  *		a function between the two numbers
  *
  *		Usage: ./calc num1 operator num2
  *			|	|	|	|_ argv[3]
  *			|	|	|_ argv[2]
  *			|	|_ argv[1]
  *			|_ argv[0]
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return:
