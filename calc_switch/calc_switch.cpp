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
		cout << "Enter operator and number: ";
		cin >> input_char;

		if ((input_char == 'q') || (input_char == 'Q'))
			break;

		cin >> value;
		
		switch (input_char) {
			case '+':
				result += value;
				break;
			case '-':
				result -= value;
				break;
			case '*':
				result *= value;
				break;
			case '/':
				if (value == 0) {
					cout << "Error: Divide by 0.\n";
					cout << "Ignoring operation.\n";
				} else
					result /= value;
				break;
			case 'h':
			case 'H':
				cout << "Operator	Meaning\n";
				cout << "   + 		Add\n";
				cout << "   - 		Subtract\n";
				cout << "   * 		Multiply\n";
				cout << "   / 		Divide\n";
				continue;				
			default: 
				cout << "Unknown operator " << input_char << "\n";
				continue;
		}
	}
	cout << "Result: " << result << "\n";
	return(0);
}	
