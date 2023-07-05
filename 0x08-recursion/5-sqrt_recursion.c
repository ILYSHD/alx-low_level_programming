#include "main.h"

/**
 * _sqrt_recursion - function
 * @n: parametre
 * @val: parametre
 * Return: square root of n
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - function
 * @n: parametre
 * @val: parametre
 * Return: square root of n
 */
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
