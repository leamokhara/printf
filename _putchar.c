<<<<<<< HEAD
#include "main.h"

=======
#include <unistd.h>
>>>>>>> 92c86ff9f2412ac3e350ac0f4263394db87b89bc
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
<<<<<<< HEAD
 * Return: On success 1.
=======
 * Return: Om success 1.
>>>>>>> 92c86ff9f2412ac3e350ac0f4263394db87b89bc
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
