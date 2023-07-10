#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 *@s1: string 1
 *@s2: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *strngnew = NULL;
	unsigned int i;
	int n1;
	int n2;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	strngnew = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (strngnew == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		strngnew[i] = s1[i];
	for (; s2[count] != '\0'; i++)
	{
		strngnew[i] = s2[count];
		count++;
	}
	return (strngnew);
}
