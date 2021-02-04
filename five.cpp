#include <iostream>
#include <string>
using namespace std;

float data[5];	// data to average and total
float total;	// the total of the data items
float average;	// the average of the data items

int main ()
{
	data[0] = 34.0;
	data[1] = 27.0;
	data[2] = 46.5;
	data[3] = 82.0;
	data[4] = 22.0;

	total = data[0] + data[1] + data[2] + data[3] + data[4];
	average = total / 5.0;
	cout << "Total " << total << "\nAverage " << average << "\n";
	return (0);
}
