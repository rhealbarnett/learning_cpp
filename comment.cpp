#include <iostream>

using namespace std;

int height;
int width;
int area;

int main()
{
	cout << "Enter width height? ";
	cin >> width >> height;
	area = (width*height) / 2.0;
	cout << "The area is " << area << "\n";
	return(0);
}
