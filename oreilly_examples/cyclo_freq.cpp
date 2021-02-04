#include <iostream>
#include "plasma.hpp"
using namespace std;

double ans;

double cyclo_freq(double q, float B0, double m)
{
	ans = q * B0 / m;
	return(ans);
}
