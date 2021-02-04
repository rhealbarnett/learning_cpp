#include <iostream>
using namespace std;

int result;
int value;
char input_char;

int main()
{
	result = 0;
	while (1) {
		cout << "Result: " << result << "\n";
		cout << "Enter operation and number: \n";
		cin >> input_char;
		if ((input_char == 'q') || (input_char == 'Q'))
			break;

		cin >> value;
		if (input_char == '+') {
			result += value;
		} else if (input_char == '-') {
			result -= value;
		} else if (input_char == '*') {
			result *= value;
		} else if (input_char == '/') {
			if (value == 0) {
				cout << "Error: divide by 0.\n";
				cout << "Ignoring operation.\n";
			} else {
				result /= value;
			}
		} else {
			cout << "Unknown operator " << input_char << "\n";
		}
		
	}
	return(0);
}
