#include <iostream>
using namespace std;

int test_array[3][5] = {
	{0, 1, 2, 3, 4},
	{10, 11, 12, 13, 14},
	{20, 21, 22, 23, 24},
};

int main()
{
	cout << "The last element is " << test_array[2][4] << "\n";
	return(0);
}
