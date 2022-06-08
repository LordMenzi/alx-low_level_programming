<<<<<<< HEAD
#include "main.h"
/**
 * main entry point
 *
 * Return:Always 0 (Succes)
 */
int main(void)
{
	_putchar('_');
        _putchar('p');
	_putchar('u');
        _putchar('t');
	_putchar('c');
        _putchar('h');
        _putchar('a');
        _putchar('r');
	_putchar('\n');

	return (0);
}

=======
#include "_putchar.h"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
>>>>>>> 43310e954eb6100cec6fce7fe3179c95c9c1e8ea
