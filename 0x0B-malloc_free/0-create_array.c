#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create char function - create char
 * @ unsigned int size : the number
 * @ char c : the caractére to print
 *
 * * Return : nothing.
*/ 

char *create_array(unsigned int size, char c)
{
	char *vecteur;
	unsigned int i;

	if (size == 0)
        return  (NULL);

	vecteur = malloc(size * sizeof(char));
	if( vecteur == NULL)
	return (NULL);

	for (i = 0 ; i < size ; i++)
	vecteur [i]=c;

	return (vecteur);
}
