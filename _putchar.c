#include <unistd.h>
/**
 * _putchar: Prints to the standard output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
