#include "main.h"

/**
 * is_prime_number - function
 * @n: parametre
 * @val: parametre
 * Return: square root of n
 */
int checker(int n, int val);
int is_prime_number(int n)
{
	return (checker(n, 2));
}
/**
 * checker - function
 * @n: parametre
 * @val: parametre
 * Return: square root of n
 */
int checker(int n, int val)
{
	if (val >= n && n > 1)
	{
		return (1);
	}
	else if (n % val == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (checker(n, val + 1));
	}
}
