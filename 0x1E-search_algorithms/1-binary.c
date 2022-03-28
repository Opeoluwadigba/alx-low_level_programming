#include "search_algos.h"

/**
 * my_print - helper func to print array everytime array is halved
 * @array: array
 * @l: left index of original array
 * @r: right index of original array
 */
void my_print(int *array, size_t l, size_t r)
{
  size_t i = 0;

  printf("Searching in array: ");
  for (i = l; i <= r; i++)
    {
      if (i != r)
	printf("%d, ", array[i]);
      else
	printf("%d\n", array[i]);
    }
}

/**
 * binary_search - search mids
 * @array: given array of numbers
 * @size: array size
 * @value: number to search for
 * Return: index at which value's found
 */
int binary_search(int *array, size_t size, int value)
{
  size_t mid = 0;
  size_t l = 0;
  size_t r = size - 1;

  if (!array)
    return (-1);

  while (l <= r)
    {
      my_print(array, l, r);
      mid = (l + r) / 2;
      if (array[mid] == value)
	return (mid);
      else if (array[mid] > value)
	r = mid - 1;
      else
	l = mid + 1;
    }
  return (-1);
}
