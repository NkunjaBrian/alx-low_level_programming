#include "main.h"
#include <stdlib.h>
/*
 * *create_array(unsigned int size, char c) function to create an array of characters initialized by char
 * @size size of array
 * @c char to initialize array
 * Description: create array of size and assign char c
 * return pointer to array
 *
 */
char *create_array(unsigned int size, char c)
{
	
	unsigned int i;
	char *str = malloc(sizeof(char)*size);
	if(size == 0 || str == NULL)
		return(NULL);
			for(i=0;i<size;++i)
				str[i] = c;
	return str;
}

