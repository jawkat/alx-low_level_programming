#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * str_concat : concatener two string
 * @s1 : first string
 * @s2 : sacond string
 *
 * Return: one string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	ptr = malloc(sizeof(char) * (len1 + len2) + 1);
	
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	
	for (i = len1; i < len1 + len2; i++)
		ptr[i] = s2[i - len1];

	ptr[len1 + len2] = '\0';
	
	return (ptr);
}
