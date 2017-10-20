void
my_sort(int *items, int num_items)
{
	int temp;

	for (int i = 0; i < num_items; i++) {
		for (int j = i + 1; j < num_items; j++) {
			if (items[j] < items[i]) {
				temp = items[i];
				items[i] = items[j];
				items[j] = temp;
			}
		}
	}
}
