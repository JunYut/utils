# include "../include/utils.h"

/**
 * @brief Randomly returns a number between INT_MIN and INT_MAX
 * @param n 1 to return positive numbers, -1 to return negative numbers
*/
int rand_int(int n)
{
	int digits = rand() % 11;
	int digitTier = power(10, digits);
	return (rand_sign(n) * rand() % digitTier);
}

/**
 * @brief Randomly returns 1 or -1
 * @param n set 1 to return 1, set -1 to return -1
*/
int rand_sign(int n)
{
	if (n == 1)
		return (1);
	if (n == -1)
		return (-1);
	return (rand() % 2 == 0 ? 1 : -1);
}
