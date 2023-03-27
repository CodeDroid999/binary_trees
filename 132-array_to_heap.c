#include "binary_trees.h"

/**
 * array_to_heap - Builds a Max Binary Heap tree from an array.
 *
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of element in the array.
 *
 * Return: A pointer to the root node of the created one, NULL on failure.
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int index;
	heap_t *root = NULL;

	for (index = 0; index < size; index++)
		heap_insert(&root, array[index]);

	return (root);
}
