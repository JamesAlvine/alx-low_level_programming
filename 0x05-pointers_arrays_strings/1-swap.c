/**
 * File name: 1-swap.c
 */

#include "swap.h"

/**
 * swap_int: swapt the two integers.
 * 
 * @dest: first integer.
 * @b: second integer.
 *
 * Return: function that swaps the values of two integers.
 */
void swap_int(int *a, int *b)
{
	int d = *a;
	*a = *b;
	*b = *d;
}
