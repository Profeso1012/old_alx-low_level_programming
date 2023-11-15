#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list types;
	int i;
	char *strptr;
	char *punc = "";

	va_start(types, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", punc, va_arg(types, int));
					break;
				case 'i':
					printf("%s%d", punc, va_arg(types, int));
					break;
				case 'f':
					printf("%s%f", punc, va_arg(types, double));
				case 's':
					strptr = va_arg(types, char *);
					if (!strptr)
						strptr = "(nil)";
					printf("%s%s", punc, strptr);
					break;
				default
					i++;
				continue;
			}
			punc = ",";
			i++;
		}
	}
	print("\n");
	va_end(types);
}
