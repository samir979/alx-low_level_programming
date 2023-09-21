#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: pointer to s
 */
char *leet(char *s)
{
	int scount, leetcount;

	char lletters[] = "aAeEoOtTlL";
	char lnum[] = "4433007711";

	scount = 0;
	while (s[scount] != '\0')
	{
		leetcount = 0;
		while (leetcount < 10)
		{
			if (lletters[leetcount] == s[scount])
			{
				s[scount] = lnum[leetcount];
			}
			leetcount++;
		}
		scount++;
	}
	return (s);
}
