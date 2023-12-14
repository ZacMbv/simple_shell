#include "shell.h"

/**
 * bfree - Frees pointer and Nulls address
 * @ptr: Pointer address to free
 *
 * Return: 1 if freed, esle 0
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
