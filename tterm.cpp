#include <iostream>
#include <string>
using namespace std;

int term;	// term used in two expressions
int check;
int main()
{
	term = 3 * 5;
	cout << "Twice " << term << " is " << 2*term << "\n";
	cout << "Three times " << term << " is " << 3*term << "\n";
	check = term / 0;
	return (0);
}
