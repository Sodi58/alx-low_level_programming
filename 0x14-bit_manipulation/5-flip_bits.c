#include "main.h"

/**
 * flip_bits - counts at the num of bits to change
 * to get from one num to another
 * @n: first num
 * @z: second num
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int z)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ z;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
