# PROJECT: 0x0E. Searching Algorithms 0

## AUTHOR: Matthew Allen

## TASKS

### 0. Linear search - `0-linear.c`

Function that searches for a value in an array of integers using the Linear search algorithm.

### 1. Binary search - `1-binary.c`

Function that searches for a value in a sorted array of integers using the Binary search algorithm.

### 2. Big O #0 - `2-O`

Time complexity (worst case) of a linear search in an arrray of size `n`.

### 3. Big 0 #1 - `3-O`

Space complexity (worst case) of an iterative linear search algorithm in an array of size `n`.

### 4. Big 0 #2 - `4-O`

Time complexity (worst case) of a binary search in an array of size `n`.

### 5. Big O #3 - `5-O`

Space complexity (worst case) of a binary search in an array of size `n`.

### 6. Big O #4 - `6-O`

Space complexity of the following function/algorithm:

    int **allocate_map(int n, int m)
    {
        int **map;
    
        map = malloc(sizeof(int *) * n);
        for (size_t i = 0; i < n; i++)
        {
            map[i] = malloc(sizeof(int) * m);
        }
        return (map);
    }
