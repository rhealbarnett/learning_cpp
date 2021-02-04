#include <iostream>

using namespace std;

char line[100];
int value;

int main()
{
	cout << "Enter a value: ";
	cin >> value;
	cout << "Twice " << value << " is " << value*2.0 << "\n";
	return(0);
}
