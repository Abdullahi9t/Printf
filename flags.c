#include "main.h"
/**
* get_flags - Calculate active flags
* @format: Formatted String in which to print the arguments
* @i: take a parameter
* Return: Flags
*/

int get_flags(const char *format, int *i)
{
	int j, current_i;

	int flags = 0;

	const char FLAGS_CHAR[] = {'-', '+', '0', '#', ' ', '\0'};

	const int FLAGS_ARRAY[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE};

	for (current_i = *i + 1; format[current_i] != '\0'; current_i++)
	{
		for (j = 0; FLAGS_CHAR[j] != '\0'; j++)
		{
			if (format[current_i] == FLAGS_CHAR[j])
			{
				flags |= FLAGS_ARRAY[j];
				break;
			}

		}
		if (FLAGS_CHAR[j] == 0)
			break;
	}
	*i = current_i - 1;

	return (flags);

}

