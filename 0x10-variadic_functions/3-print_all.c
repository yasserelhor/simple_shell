#include "variadic_functions.h"


/**
 * print_all - Prints data based on the format specifier
 * @format: A string containing format specifiers
 * @...: Variable number of arguments based on the format specifiers
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int b = 0, start = 0;
	char *f;

	va_start(list, format);
	while (format && format[b] != '\0')
	{
		switch (format[b])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(list, int));
			break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(list, double));
			break;
		case's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			f = va_arg(list, char*);
			if (f)
			{ printf("%s", f);
			break; }
			printf("%p", f);
			break; }
		b++;
	}
	printf("\n");
	va_end(list);
}
