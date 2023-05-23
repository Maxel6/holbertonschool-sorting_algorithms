#include "sort.h"
/**
 * partition - Function that will find the partition as Lomuto scheme requires
 * @array: array to partition
 * @low: size to partition
 * @high: size to partition
 * @size: size of array
 * Return: Always an unsigned partition index
 */
size_t partition(int *array, int low, int high, size_t size)
{
	int i, j;
	int temp, pivot;

	pivot = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * compare_sort - Function that will compare the numbers in the indexed posit
 * @array: array to be compared and sorted
 * @low: index of element to be compared
 * @high: index of element to be compared
 * @size: size of array
 */
void compare_sort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		compare_sort(array, low, pivot - 1, size);
		compare_sort(array, pivot + 1, high, size);
	}
}
/**
 * quick_sort - Function that will do quic sorting as per Lomuto scheme
 * @array: array that will be sorted
 * @size: size of the array that will be sorted
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	compare_sort(array, 0, size - 1, size);
}
