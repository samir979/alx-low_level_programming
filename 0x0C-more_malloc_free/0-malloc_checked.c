#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory block to be allocated
 *
 * Return: pointer to the addres
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
