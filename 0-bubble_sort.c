#include "sort.h"

/**
 * bubble_sort - Sort an array with bubble sort algorithm
 * @array: the array that is going to be sorted
 * @size: Size of array
 *
 * Return: Nothing.
 */

void bubble_sort(int *array, size_t size)
{
int temp;
size_t x, y;

if (array == NULL || size == 0)
return;

for (x = 0; x < size; x++)
{
for (y = 0; y < size - 1; y++)
{
if (array[y] > array[y + 1])
{
temp = array[y];
array[y] = array[y + 1];
array[y + 1] = temp;
print_array(array, size);
}
}
}
}
