
#include "variadic_functions.h"

/**
 * format_char - that prints strings, followed by a new line.
 * @app: argument pointer
 * @separator: separator betweent number
 */
void format_char(char *separator, va_list app)
{
printf("%s%c", separator, va_arg(app, int));
}
/**
 * format_int - that prints strings, followed by a new line.
 * @app: argument pointer
 * @separator: separator betweent number
 */
void format_int(char *separator, va_list app)
{
printf("%s%d", separator, va_arg(app, int));
}
/**
 * format_float - that prints strings, followed by a new line.
 * @app: argument pointer
 * @separator: separator betweent number
 */
void format_float(char *separator, va_list app)
{
printf("%s%f", separator, va_arg(app, double));
}
/**
 * format_string - that prints strings, followed by a new line.
 * @app: argument pointer
 * @separator: separator betweent number
 */
void format_string(char *separator, va_list app)
{
char *str = va_arg(app, char *);

switch ((int)(!str))
{
case 1:
str = "(nil)";
}
printf("%s%s", separator, va_arg(app, str));
}
void print_all(const char * const format, ...)
{
int i = 0, j;
char *separator = "";
va_list app;
token_t tokens[] = {
{'c', format_char},
{'i', format_int},
{'f', format_float},
{'s', format_string},
{NULL, NULL}
};

va_start(app, format);
while (format && format[i])
{
j = 0;
while (tokens[j].token)
{
if (format[i] == tokens[j].token[0])
{
tokens[j].f(separator, app);
separator = ", ";
}
j++;
}
i++;

}
printf("\n");
va_end(app);
}
