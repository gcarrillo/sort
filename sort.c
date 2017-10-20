#include <stdio.h>
#include "my_sort.h"

int
main(int argc, char **argv)
{
	int numbers[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int arr_size = sizeof numbers / sizeof numbers[0];

	my_sort(numbers, arr_size);

	for (int i = 0; i < arr_size; i++)
		printf("numbers[%d] = %d\n", i, numbers[i]);

	return 0;
}
