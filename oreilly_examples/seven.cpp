#include <iostream>
using namespace std;

int seven_count;
int data[5];
int three_count;
int idx;

int main() {
	seven_count = 0;
	three_count = 0;
	
	cout << "Please enter 5 numbers: \n";
	cin >> data[0] >> data[1] >> data[2] >>
			data[3] >> data[4];

	for (idx = 0; idx < 5; ++idx) {
		if (data[idx] == 3)
			++three_count;
		if (data[idx] == 7)
			++seven_count;
	}
	cout << "Threes: " << three_count << " Sevens: " << seven_count << "\n";
	return(0);
}
