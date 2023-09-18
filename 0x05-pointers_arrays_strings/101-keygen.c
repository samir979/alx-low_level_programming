#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * generate random valid passowrd
 * Return: 0 if exit ok
 */
int main (void)
{
	srand(time(0));
	int num = rand ();
	printf("%i\n", num);
	return (0);
}
