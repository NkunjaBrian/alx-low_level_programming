#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/*
 * *_strdup(char *str)- returns a pointer to a new string which is a duplicate of the string 
 * @str - string to be duplicated
 * Returns NULL if str = NULL
 *
 */
char *_strdup(char *str)
{
   char *bbb;
   int i,r = 0;
   if(str == NULL)
   return NULL;
   i = 0;
   while(str[i]!='\n')
	   i++;
   bbb = malloc(sizeof(char)*(i=1));
   if(bbb == NULL)
   return NULL;
   for(r = 0;str[r];r++)
   bbb[r] = str[r];

   return (bbb);
 }
   
     

