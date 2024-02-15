# include "../include/utils.h"

/**
 * @brief Count the number of digits in a number
 * @return Returns negative digits for negative numbers
*/
int	count_digits(int n)
{
	int count = 1;
	int sign = n < 0 ? -1 : 1;

	while (n <= -10 || n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count * sign);
}

int	power(int base, int exponent)
{
	int result = 1;
	for (int i = 0; i < exponent; i++)
		result *= base;
	return (result);
}

int	max(int* arr, size_t size)
{
	int max = INT_MIN;
	for (size_t i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	return (max);
}

int	min(int* arr, size_t size)
{
	int min = INT_MAX;
	for (size_t i = 0; i < size; i++)
		if (arr[i] < min)
			min = arr[i];
	return (min);
}
