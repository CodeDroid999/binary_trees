#include "binary_trees.h"

/**
 * heap_to_sorted_array - Converts a Binary Max Heap to a sorted array-integer.
 *
 * @heap: A pointer to the root node of the heap to convert.
 * @size: An address to store the size of the array.
 *
 * Return: Sorted in descending order
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int *array;
	int extract, i = 0;
	size_t heap_size;

	if (!heap)
		return (NULL);
	heap_size = binary_tree_size(heap);
	*size = heap_size;
	array = malloc(heap_size * sizeof(int));
	if (!array)
		return (NULL);
	while (heap)
	{
		extract = heap_extract(&heap);
		array[i] = extract;
		i++;
	}
	return (array);
}
