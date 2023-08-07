#include "main.h"
#include <stdlib.h>
/*
 * *str_concat - function to concanate strings
 * @s1 - string to be conc
 * @s2 - string to be concanated
 * return null on failure
 */
 char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ci;

	if(s1 == NULL)
          return "";

	if(s2 == NULL)
          return "";

        while(s1[i]!='\0')
	i++;

        while(s2[ci]!='\0')
	ci++;

     conct = malloc(sizeof(char)*(i+ci+1));
	     if(conct == NULL)
             return NULL;

    i = ci = 0;
     while(s1[i]!='\0')
          {
         conct[i] = s1[i];
          i++;
	  }
	    
	 while(s2[ci]!='\0')
	  {
	  conct[i] = s2[ci];
	  ci++,i++;
	  }

	  conct[i] ='\0';
	  return (conct);
}

 	
