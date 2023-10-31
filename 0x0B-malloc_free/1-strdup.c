#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - function cr
 * @str : the string to copied
 *
 * Return: char pointer to malloc copied str memory adress or NULLif error
*/

char *_strdup(char *str)
{
	char *ptr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	ptr[len] = '\0';

	return (ptr);
}

