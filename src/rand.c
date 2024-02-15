# include "../include/utils.h"

/**
 * @brief Randomly returns a number between INT_MIN and INT_MAX
 * @param n 0 for random, positive to return positive number, negative
 * 			 to return negative number
*/
int rand_int(int n)
{
	int digits = rand() % 11;
	int digitTier = power(10, digits);
	return (rand_sign(n) * rand() % digitTier);
}

/**
 * @brief Randomly returns 1 or -1
 * @param n 0 for random, positive to return 1, negative to return -1
*/
int rand_sign(int n)
{
	if (n > 0)
		return (1);
	if (n < 0)
		return (-1);
	return (rand() % 2 == 0 ? 1 : -1);
}
