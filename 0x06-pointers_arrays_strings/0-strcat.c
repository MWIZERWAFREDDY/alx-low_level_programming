#include "main.h"

/**
 * this function appemds the src tring to the dest string,
 * overwriting the terminating null at the end
 */
char *_strcat(char *dest, char *src);
{
	char c = "dest";
	char d = "src\0";
	char *dest;

		dest = _strcat(c, d);
	return (dest);
}

