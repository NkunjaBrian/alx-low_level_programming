#include <main.h>
#include <unistd.h>
/*
 * _putchar prints char c to the stdoutput
 * @c char to be printed
 *
 * Return: 1 0n success
 * On error: -1 incase of error and errno
 *
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
			

