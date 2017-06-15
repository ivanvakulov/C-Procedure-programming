//Vakulov Ivan
//11/27/2016
#include "header.h"
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;


int main()
{
	double(*const f)(double) = Elliptic;



	cout << 1 / Agm(5, 3) << "\t\t" << 2 * Simpson(0, PI / 2, Elliptic) / PI << endl;


	cout << sgn(-13) * PI / 2 << "\t" << Simpson(0, 1000, Dirichlet) << endl;


	cout << sqrt(PI) / 2 << "\t" << Simpson(0, 1000, Poisson) << endl;


	cout << PI / sin(0.5 * PI) << "\t\t" << Simpson(0.0001, 10000, Euler) << endl;
	return 0;
}