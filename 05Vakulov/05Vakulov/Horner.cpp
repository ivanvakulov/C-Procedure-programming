//Vakulov Ivan
//10.23.2016
#include "Horner.h"
#include <cassert>
#include <ctime>
#include <iostream>
#include <math.h>

using namespace std;

void fillArray(double * coeff, size_t size)
{ 
	srand(time(NULL));
	for(size_t i=0;i<=size;i++)
		coeff[i] = (rand()%10) * ((rand()%2) ? 1 : -1);
	return;
}
double sum(double * coeff, size_t size, int sign)
{
	double res = 0;
	for(size_t i = 0;i <= size;i++){
		res+= coeff[i] * pow(float(sign), float(i));
	}
	return res;
}
double Horner(double * coeff, size_t size, double x)
{
	double result = 0;
	cout << "Polinomial:" << endl;
	for (size_t i = 0; i <= size; i++) {
		cout << "+(" << coeff[i] << "*x^" << i << ")";
		result += coeff[i] * pow(float(x), float(i));
	}
	assert(((x == 1) || (x == -1)) ? (result == sum(coeff, size, x)) : true);
	return result;
}