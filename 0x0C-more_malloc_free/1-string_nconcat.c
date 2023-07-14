#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concat two strings, till n bytes of s2
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2
 *
 * Return: Pointer returns concatenated string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int con1 = 0, con2 = 0, i, j;
	char *y = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[con1] != '\0')
		con1++;
	while (s2[con2] != '\0')
		con2++;

	if (n >= con2)
		n = con2;

	y = malloc(con1 + n + 1);

	if (y == NULL)
		return (NULL);

	for (i = 0; i < con1; i++)
	{
		y[i] = s1[i];
	}

	for (i = con1; i < (con1 + n); i++)
	{
		p[i] = s2[i - cont1];
	}

	y[i] = '\0';

	return (y);
}
