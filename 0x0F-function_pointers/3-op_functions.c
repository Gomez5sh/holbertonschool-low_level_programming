#include  "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum option
 * @a: int variable
 * @b: int variable
 * Return: op_add
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub option
 * @a: int variable
 * @b: int variable
 * Return: op_sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul option
 * @a: int variable
 * @b: int variable
 * Return: op_mul
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div option
 * @a: int variable
 * @b: int variable
 * Return: op_div
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod -mod option
 * @a: int variable
 * @b: int variable
 * Return: op_mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
