#include "search_algos.h"

/**
 * recursive_binary_search - function that searches for a value in a sorted
 * array of integers, using recursion
 * 
 * @array pointer to the first element of the array to search in
 * @left: index of first value to look at in array
 * @right: index of last value to look at in array
 * @value: the value to search for
 * Return: index of the value if present in the array, otherwise -1
 */
int recursive_binary_search(int *array, int left, int right, int value)
{
    int mid, i;

    if (right >= left)
    {
        if (right == left && value == array[right])
            return (right);

        mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        if (value <= array[mid])
            return (recursive_binary_search(array, left, mid, value));

        return (recursive_binary_search(array, mid + 1, right, value));
    }
    return (-1);
}


/**
 * advanced_binary - function that searches for a value in a sorted array of
 * integers.
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in @array
 * @value: the value to search for
 * Return: index of value if present in the array, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (!array)
        return (-1);
    return (recursive_binary_search(array, 0, (int)size - 1, value));
}