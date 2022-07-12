#include "main.h"
#include <stddef.h>

/**
 * get_func - look for the specifier
 * @x: variable to the function
 * Return: function
 */
int (*get_func(char x))(va_list)
{
	int i = 0;
<<<<<<< HEAD
	convert_match arr[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", print_percent},
		{NULL, NULL}

	};
	while (arr[i].id)
	{
		if (x == arr[i].id[0])
			return (arr[i].f);
	i++;
	}
	return (NULL);
}

=======
	conver_t arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	while (arr[i].sym)
	{
		if (x == arr[i].sym[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
>>>>>>> 92c86ff9f2412ac3e350ac0f4263394db87b89bc
