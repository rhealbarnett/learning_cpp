#include <iostream>
using namespace std;

int total;
int item;
int minus_items;

int main()
{
	total = 0;
	minus_items = 0;
	while (1) {
		cout << "Enter # to add \n";
		cout << "or 0 to stop: ";
		cin >> item;
		
		if (item == 0)
			break;

		if (item < 0) {
			++minus_items;
			continue;
		}
		total += item;
		cout << "Total: " << total << "\n";
	}

	cout << "Final total " << total << "\n";
	cout << "with " << minus_items << " negative entry omitted\n";
}
