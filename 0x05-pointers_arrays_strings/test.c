#include <stdio.h>

int main(void)
{
	int v[5];
	printf("a 5 element array has size: %ld bytes\n", sizeof(v));
	printf("an array of size %ld bytes has %ld elements\n", sizeof(v), sizeof(v) / sizeof(int));
	return (0);
}
