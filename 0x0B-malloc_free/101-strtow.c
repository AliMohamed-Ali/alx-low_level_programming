#include "main.h"
#include <string.h>
/**
 * is_space - space or not.
 * @c: char
 * Return: int
*/

int is_space(char c)
{
return (c == ' ' || c == '\t' || c == '\n');
}
/**
 * count_words - return count of word.
 * @str: pointer to array
 * Return: int
*/
int count_words(char *str)
{
int count = 0;
int i, len;

len = strlen(str);
for (i = 0; i < len; ++i)
{
if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
{
++count;
}
}

return (count);
}

/**
 * strtow - concatenates all the arguments of your program.
 * @str: pointer to array
 * Return: ponter to array or NULL
*/
char **strtow(char *str)
{
char **words;
int i, j, k, len, count;

if (str == NULL || *str == '\0')
{
return (NULL);
}

count = count_words(str);

words = malloc((count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}

for (i = 0, j = 0; j < count; ++i)
{
while (is_space(str[i]))
{
++i;
}

len = 0;
while (!is_space(str[i + len]) && str[i + len] != '\0')
{
++len;
}

words[j] = malloc((len + 1) * sizeof(char));
if (words[j] == NULL)
{
for (k = 0; k < j; ++k)
{
free(words[k]);
}
free(words);
return (NULL);
}

memcpy(words[j], str + i, len);
words[j][len] = '\0';

++j;
i += len;
}

words[count] = NULL;

return (words);
}
