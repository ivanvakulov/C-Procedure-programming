#include "header.h" 
#include <iostream> 

using namespace std;

double Power(double a, unsigned int n) {
	double res = 1;
	while (n) {
		if (n & 1)
			res *= a;
		a *= a;
		n >>= 1;
	}
		return res;
} 