#inclued"main.h"
/**
 * leet -  encodes a string into 1337.
 * @c: character that encode
 * Return: pointer of character
 */
char *leet(char *c)
{
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	char *cp = c;
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
				*c = value[i] + 48;
		}
		c++;
	}
	return (cp);
}

