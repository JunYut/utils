# include "../include/utils.h"

void	print_arr(int* arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void	debug()
{
	static int i = 0;
	printf("DEBUGGING %d\n", i++);
}
