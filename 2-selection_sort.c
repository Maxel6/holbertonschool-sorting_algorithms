#include "sort.h"
/**
 * selection_sort - sort an array using selection sorting algo
 * @array: the array to sort
 * @size: the size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int min = array[i], tmp = 0, lmin = 0;
	bool fl = 0;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1, min = array[i]; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				lmin = j;
				fl = 1;
			}

	}
		if (fl)
		{
			tmp = array[i];
			array[lmin] = tmp;
			array[i] = min;
			print_array(array, size);
		}
		fl = 0;
		
	}
}
