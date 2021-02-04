#include <iostream>
using namespace std;

char line[100];

int main()
{
	cout << "Enter a line: ";
	cin.getline(line,sizeof(line));
	cout << "The length of the line is: " << strlen(line) << "\n";
	return(0);
}
