#include <stdio.h>

/**
 * main - function
 * @argc: parametre
 * @argv: parametre
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		result = argv[1] * argv[2];
		return (result);
	}
}
