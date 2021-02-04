#include <iostream>
#include "plasma.hpp"
using namespace std;

double q;
float B0;
double m;
double om_c;

int main()
{
	om_c = 0;
	m = 1.67E-27;
	B0 = 0.1;
	q = 1.602E-19;

	om_c = cyclo_freq(q, B0, m);

	cout << "om_c = " << om_c << "\n";
	return(0);

}
