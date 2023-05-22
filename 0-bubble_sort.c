#include "sort.h"

// void swap(int **array, int n)
// {
// 	int tmp = 0;
// 	tmp = *array[n + 1];
// 	*array[n + 1] = *array[n];
// 	*array[n] = tmp;
// }

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int tmp = 0;
	while (i < size - 1)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
		}
		i++;
	}
	for(i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
			{
				printf("bite\n");
				bubble_sort(array, size);
			}		
	}
}