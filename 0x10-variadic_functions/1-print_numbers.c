#include "variadic_functions.h"
/**
 * print_numbers - that prints numbers, followed by a new line.
 * @n: number of arg
 * @separator: separator betweent number
 * @...: all number
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
int i = n;
if (!n)
{
printf("\n");
return;
}
va_start(arg, n);
while (i--)
{
printf("%d%s", va_arg(arg, int), i ? (separator ? separator : "") : "\n");
}
va_end(arg);
}
