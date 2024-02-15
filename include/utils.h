# ifndef UTILS_H
	# define UTILS_H

	# include <stdlib.h>
	# include <limits.h>
	# include <stddef.h>
	# include <stdio.h>

	// Debug functions
	void	print_arr(int* arr, size_t size);
	void	debug();

	// Random number generator

	int rand_int(int n);
	int rand_sign(int n);

	// Math functions

	int	count_digits(int n);
	int power(int base, int exponent);
	int	max(int* arr, size_t size);
	int	min(int* arr, size_t size);

# endif
