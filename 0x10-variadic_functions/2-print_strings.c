#include "variadic_functions.h"

/**
 * print_strings - that prints strings, followed by a new line.
 * @n: number of arg
 * @separator: separator betweent number
 * @...: all number
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg;
int i = n;
char *str;

if (!n)
{
printf("\n");
return;
}
va_start(arg, n);
while (i--)
{
printf("%s%s", (str = va_arg(arg, char)) ? str : "(nil)",
i ? (separator ? separator : "") : "\n");
}
va_end(arg);
}
