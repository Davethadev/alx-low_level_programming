#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: array
*/

void reverse_array(int *a, int n)
{
	int k, l;

	for (k = 0; (k < (n - 1) / 2); k++)
	{
		l = a[k];
		a[k] = a[n - 1 - k];
		a[n - 1 - k] = l;
	}
}
