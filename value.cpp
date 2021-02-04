#include <iostream>
using namespace std;

void inc_counter(int &counter)
{
	++counter;
}

int main()
{
	int a_count = 0;

	inc_counter(a_count);
	cout << a_count << "\n";
	return(0);
}
