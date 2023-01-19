/**
  * print_name - funtion to print name
  *
  * @name: name to print
  * @f: funtion pointer to return nothing
  *
  * Return: Always 0 (success)
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
