#include "holberton.h"
#include <stdio.h>
/**
 *  * is_prime_number - check if n is a prime number
 *   * @n: int
 *    * Return: 0 or 1
<<<<<<< HEAD
 */
=======
 *     */
>>>>>>> f2af51d9b1e010bd9eef470147b84ef138a86b5b


int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 *  * check_prime - check all number < n if they can divide it
 *   * @n: int
 *    * @resp: int
 *     * Return: int
<<<<<<< HEAD
 */
=======
 *      */
>>>>>>> f2af51d9b1e010bd9eef470147b84ef138a86b5b

int check_prime(int n, int resp)
{

	if (resp >= n && n > 1)
<<<<<<< HEAD
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}
=======
			return (1);
	else if (n % resp == 0 || n <= 1)
			return (0);
	else
			return (check_prime(n, resp + 1));
}

>>>>>>> f2af51d9b1e010bd9eef470147b84ef138a86b5b
