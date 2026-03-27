#include "main.h"

/**
 * sqrt_helper - finds natural square root candidate recursively
 * @n: target number
 * @candidate: current candidate root
 *
 * Return: natural square root if found, otherwise -1
 */
int sqrt_helper(int n, int candidate)
{
	if (candidate * candidate == n)
		return (candidate);

	if (candidate * candidate > n)
		return (-1);

	return (sqrt_helper(n, candidate + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to evaluate
 *
 * Return: natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}
