#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;
int item_array[ARRAY_SIZE] = {1, 2, 5000, 3, 4};

int &biggest(void)
{
	int idx;
	int biggest;

	biggest = 0;
	for (idx = 0; idx < ARRAY_SIZE; ++idx) {
		if (item_array[biggest] < item_array[idx])
			biggest = idx;
	}
	return(item_array[biggest]);
}
