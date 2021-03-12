#include "3-calc.h"

/*** FUCTION OP_ADD ***/
/**
 * op_add - function that adds two numbers.
 * @a: int type
 * @b: int type
 *
 * Return: result of the sum.
 */
int op_add(int a, int b)
{
	int r = 0;

	r = a + b;
	return (r);
}
/*** END FUCTION OP_ADD ***/

/*** FUCTION OP_SUB ***/
/**
 * op_sub - function that substract two numbers.
 * @a: int type
 * @b: int type
 *
 * Return: result of the difference
 */
int op_sub(int a, int b)
{
	int r = 0;

	r = a - b;
	return (r);
}
/*** END FUCTION OP_SUB ***/

/*** FUCTION OP_MUL ***/
/**
 * op_mul - function that multiply two numbers.
 * @a: int type
 * @b: int type
 *
 * Return: result of the product
 */
int op_mul(int a, int b)
{
	int r = 0;

	r = (a * b);
	return (r);
}
/*** END FUCTION OP_MUL ***/

/*** FUCTION OP_DIV ***/
/**
 * op_div - function that divide two numbers.
 * @a: int type
 * @b: int type
 *
 * Return: result of the division.
 */
int op_div(int a, int b)
{
	int r = 0;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		r = a / b;
	}
	return (r);
}
/*** END FUCTION OP_DIV ***/

/*** FUCTION OP_MOD ***/
/**
 * op_mod - function that returns the remainder two numbers.
 * @a: int type
 * @b: int type
 *
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	int r = 0;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		r = a % b;
	}
	return (r);
}
/*** END FUCTION OP_MOD ***/

